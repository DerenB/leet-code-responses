#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Solution solution;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    solution.mergeList(nums1, m, nums2, n);

    return 0;
}