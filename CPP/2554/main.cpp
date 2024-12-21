#include <iostream>
#include <vector>
#include <set>

using namespace std;



int maxCount(vector<int>& banned, int n, int maxSum) {
    set<int> mySet(banned.begin(), banned.end());

    int runningTotal = 0;
    int resultCount = 0;

    for (int i = 1; i <= n; i++) {
        if (mySet.find(i) == mySet.end()) {
            runningTotal += i;
            if (runningTotal > maxSum) {
                break;
            } else {
                resultCount += 1;
            }
        }
    }

    return resultCount;
}



int main() {
    vector<int> itemSet1 = {1,6,5};
    const int result1 = maxCount(itemSet1, 5, 6);

    vector<int> itemSet2= {1,2,3,4,5,6,7};
    const int result2 = maxCount(itemSet2, 8, 1);

    vector<int> itemSet3= {11};
    const int result3 = maxCount(itemSet3, 7, 50);

    cout << "Test 1 Expected: " << 2 << ". Got: " << result1 << endl;
    cout << "Test 2 Expected: " << 0 << ". Got: " << result2 << endl;
    cout << "Test 3 Expected: " << 7 << ". Got: " << result3 << endl;

    return 0;
}