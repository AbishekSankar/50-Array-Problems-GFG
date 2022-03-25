#include <iostream>
#include <vector>
using namespace std;

// Method 2

// Method 1 (O(n2))
vector<int> subarraySum(int arr[], int n, long long s) {
    for (int i = 0; i < n; i++) {
        int curr_sum = arr[i];
        for (int j = i + 1; j <= n; j++) {
            if (curr_sum == s) return vector<int>{i + 1, j};
            if (curr_sum > s || j == n) break;
            curr_sum += arr[j];
        }
    }
    return vector<int>{-1};
}

int main() {
    int v[] = {1, 2, 3, 7, 5};
    int s = 12;
    vector<int> ans = subarraySum(v, sizeof(v) / sizeof(v[0]), s);
    for (int i : ans) cout << i << " ";
    return 0;
}