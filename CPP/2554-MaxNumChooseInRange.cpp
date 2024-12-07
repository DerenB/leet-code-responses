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
    // Write C++ code here

    vector<int> items = {1,6,5};

    cout << maxCount(items, 5, 6);

    return 0;
}