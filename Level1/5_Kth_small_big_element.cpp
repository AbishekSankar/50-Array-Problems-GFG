#include <algorithm>
#include <iostream>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
    sort(arr, arr + r);
    return arr[k - 1];
}

int main() {
    int a[] = {7, 10, 4, 3, 20, 15};
    int k;
    cout << "\nEnter K (small) : ";
    cin >> k;
    cout << "\nThe element is : " << kthSmallest(a, 0, sizeof(a) / sizeof(a[0]) - 1, k);
    return 0;
}