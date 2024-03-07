
#include "process_numbers.h"
#include <algorithm>
#include <iterator>
#include <ranges>

void read_numbers(std::istream& in, std::vector<int>& numbers) {
    std::ranges::copy(std::istream_iterator<int>(in), std::istream_iterator<int>(), std::back_inserter(numbers));
    std::ranges::sort(numbers);
}

void write_odds(const std::vector<int>& numbers, std::ostream& out) {
    std::ranges::copy_if(numbers, std::ostream_iterator<int>(out, " "), [](int n) { return n % 2 != 0; });
    out << '\n';
}

void write_evens(const std::vector<int>& numbers, std::ostream& out) {
    std::ranges::copy_if(numbers, std::ostream_iterator<int>(out, "\n"), [](int n) { return n % 2 == 0; });
}
