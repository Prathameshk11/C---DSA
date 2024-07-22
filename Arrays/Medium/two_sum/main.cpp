// main.cpp
#include <iostream>
#include <vector>
#include "solution.h"

int main() {
    solution sol;

    std::vector<int> nums = {1, 3, 5, 7, 9};
    int target = 10;

    std::vector<int> result = sol.twoSum(nums, target);
    if (!result.empty()) {
        std::cout << "Indices: " << result[0] << ", " << result[1] << std::endl;
    } else {
        std::cout << "No two sum solution found." << std::endl;
    }

    return 0;
}
