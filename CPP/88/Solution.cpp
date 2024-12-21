//
// Created by Deren Bozer on 12/20/24.
//

#include "Solution.h"

void Solution::mergeList(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> split1(nums1.begin(), nums1.begin() + m);
    vector<int> split2(nums2.begin(), nums2.begin() + n);

    split1.insert(split1.end(), split2.begin(), split2.end());

    sort(split1.begin(), split1.end());

    nums1 = split1;

    for (int num : nums1) {
        cout << num << " ";
    }
}