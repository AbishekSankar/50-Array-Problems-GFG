#include <climits>
#include <iostream>
using namespace std;

pair<long long, long long> getMinMax2(const long long a[], int n) {
    pair<long long, long long> minMax;
    minMax.first = INT_MAX;
    minMax.second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (a[i] < minMax.first) {
            minMax.first = a[i];
        }
        if (a[i] > minMax.second) {
            minMax.second = a[i];
        }
    }
    return minMax;
}

int main() {
    long long a[] = {3, 2, 1, 56, 10000, 167};
    pair<long long, long long> ans = getMinMax2(a, sizeof(a) / sizeof(a[0]) - 1);
    cout << "min = " << ans.first << " max = " << ans.second << endl;
    return 0;
}