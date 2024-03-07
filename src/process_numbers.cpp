#include "process_numbers.hpp"
#include <vector>
#include <algorithm>
#include <iterator>
#include <ranges>

void split_odd_even(std::istream& numbers, std::ostream& odds, std::ostream& evens) {
    std::vector<int> nums;

    std::ranges::copy(std::istream_iterator<int>(numbers), std::istream_iterator<int>(), std::back_inserter(nums));
    std::ranges::sort(nums);

    std::ranges::copy_if(nums, std::ostream_iterator<int>(odds, " "), [](int n) { return n % 2 != 0; });
    odds << '\n';

    std::ranges::copy_if(nums, std::ostream_iterator<int>(evens, "\n"), [](int n) { return n % 2 == 0; });
}
