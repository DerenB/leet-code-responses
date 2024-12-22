#include <iostream>

#include "Solution.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    Solution solution;

    vector<int> nums1 = {3, 2, 3};
    vector<int> nums2 = {2,2,1,1,1,2,2};

    const int result1 = solution.majorityElement(nums1);
    const int result2 = solution.majorityElement(nums2);

    cout << result1 << endl;
    cout << result2 << endl;

    return 0;
}