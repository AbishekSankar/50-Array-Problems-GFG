#include <iostream>
using namespace std;

pair<long long, long long> getMinMax(const long long a[], int n) {
    pair<long long, long long> ans;
    int x = a[0], min = 0, max = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < x)
            min = a[i];
        else if (a[i] > x)
            max = a[i];
    }
    ans.first = min;
    ans.second = max;
    return ans;
}

int main() {
    long long a[] = {1, 345, 234, 21, 56789};
    pair<long long, long long> ans = getMinMax(a, sizeof(a) / sizeof(a[0]) - 1);
    cout << "min = " << ans.first << "max = " << ans.second;
    return 0;
}