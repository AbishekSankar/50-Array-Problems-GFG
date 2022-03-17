#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int kthSmallest(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end(), greater<int>());
    return nums[k - 1];
}

int main() {
    vector<int> a = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k = 4;
    cout << "\nThe element is : " << kthSmallest(a, k);
    return 0;
}
