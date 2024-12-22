//
// Created by Deren Bozer on 12/21/24.
//

#include "Solution.h"

#include <unordered_map>

int Solution::majorityElement(vector<int>& nums) {
    unordered_map<int, int> countMap;

    for (int num: nums) {
        countMap[num]++;
    }

    int majorityElement = nums[0];
    int maxCount = 0;

    for (const auto& pair: countMap) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            majorityElement = pair.first;
        }
    }


    return majorityElement;
}