#pragma once
#include <utility>
#include <string>

template <int policy>
struct execute_policy{};

using seq_policy = execute_policy<0>;
using par_policy = execute_policy<1>;

std::string get_random_string() {
    std::string str{};
    for (std::size_t k = 0; k < 1000; k++) {
        str += char('a'+ rand() % 20);
    }
    return str;
}

std::size_t difference_count(seq_policy, std::string& str_lhs, std::string& str_rhs);
std::size_t difference_count(par_policy, std::string& str_lhs, std::string& str_rhs);
