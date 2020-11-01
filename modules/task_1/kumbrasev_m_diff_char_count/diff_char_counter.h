// Copyright 2020 Kumbrasev Mark
#ifndef MODULES_TASK_1_KUMBRASEV_M_DIFF_CHAR_COUNT_DIFF_CHAR_COUNTER_H_
#define MODULES_TASK_1_KUMBRASEV_M_DIFF_CHAR_COUNT_DIFF_CHAR_COUNTER_H_

#include <utility>
#include <string>

template <int policy>
struct execute_policy {};

using seq_policy = execute_policy<0>;
using par_policy = execute_policy<1>;

std::string get_random_string() {
    std::string str{};
    for (std::size_t k = 0; k < 1000; k++) {
        str += static_cast<char>('a' + rand() % 20);
    }
    return str;
}

std::size_t difference_count(seq_policy, const std::string& str_lhs, const std::string& str_rhs);
std::size_t difference_count(par_policy, const std::string& str_lhs, const std::string& str_rhs);

#endif  // MODULES_TASK_1_KUMBRASEV_M_DIFF_CHAR_COUNT_DIFF_CHAR_COUNTER_H_
