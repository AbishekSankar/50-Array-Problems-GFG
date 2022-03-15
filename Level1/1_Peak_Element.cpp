#include <iostream>
using namespace std;

int peakElement(const int arr[], int n) {
    // first or last element is peak element
    if (n == 1) return 0;
    if (arr[0] >= arr[1]) return 0;
    if (arr[n - 1] >= arr[n - 2]) return n - 1;

    // check for every other element
    for (int i = 1; i < n - 1; i++)
        // check if the neighbors are smaller
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) return i;
    return 0;
}

int main() {
    int a[] = {17, 19, 9, 5, 3, 6, 17, 7, 18, 16, 18, 11, 3, 15, 2};
    cout << peakElement(a, sizeof(a) / sizeof(a[0]) - 1);
    return 0;
}
