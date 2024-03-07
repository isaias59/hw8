#include "process_numbers.h"
#include <fstream>
#include <iostream>
#include <vector>


using namespace std;

int main() {
    std::ifstream input{ "rand_numbers.txt" };
    if (!input) {
        std::cerr << "Error opening input file.\n";
        return 1;
    }

    std::vector<int> numbers;
    read_numbers(input, numbers);

    std::ofstream odds_file{ "odds.txt" };
    if (!odds_file) {
        std::cerr << "Error opening odds file.\n";
        return 1;
    }
    write_odds(numbers, odds_file);

    std::ofstream evens_file{ "evens.txt" };
    if (!evens_file) {
        std::cerr << "Error opening evens file.\n";
        return 1;
    }
    write_evens(numbers, evens_file);

    return 0;
}

