#include "process_numbers.hpp"
#include <fstream>
#include <iostream>

int main() {
    std::ifstream input{ "rand_numbers.txt" };
    if (!input) {
        std::cerr << "Error opening input file.\n";
        return 1;
    }

    std::ofstream odds_file{ "odds.txt" };
    if (!odds_file) {
        std::cerr << "Error opening odds file.\n";
        return 1;
    }

    std::ofstream evens_file{ "evens.txt" };
    if (!evens_file) {
        std::cerr << "Error opening evens file.\n";
        return 1;
    }

    split_odd_even(input, odds_file, evens_file);

    return 0;
}
