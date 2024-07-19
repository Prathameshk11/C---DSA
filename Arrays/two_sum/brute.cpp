// brute_force.cpp
#include <iostream>
#include <vector>
#include "solution.h"

std::vector<int> solution::twoSum(std::vector<int>& nums, int target) {
    std::vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans; // Return immediately after finding the solution
            }
        }
    }
    return ans;
}

