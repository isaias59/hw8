
#ifndef PROCESS_NUMBERS_HPP
#define PROCESS_NUMBERS_HPP

#include <vector>
#include <iosfwd>
#include <iostream>

using namespace std;

void read_numbers(std::istream& in, std::vector<int>& numbers);
void write_odds(const std::vector<int>& numbers, std::ostream& out);
void write_evens(const std::vector<int>& numbers, std::ostream& out);

#endif // PROCESS_NUMBERS_HPP
