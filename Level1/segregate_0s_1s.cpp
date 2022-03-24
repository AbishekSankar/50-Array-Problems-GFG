#include <iostream>
using namespace std;

// Method 2 (Use two indexes to traverse)
void method2(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        // Increment left index when we see 0 at left
        while (arr[left] == 0 && left < right) left++;

        // Decrement right index when we see 1 at right
        while (arr[right] == 1 && left < right) right--;

        /* If left is smaller than right then there is a 1 at left
        and a 0 at right. Exchange arr[left] and arr[right]*/

        if (left < right) {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}

// Method 1 (Count 0s and 1s)
void method1(int a[], int n) {
    int c0 = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == 0) c0++;
    for (int i = 0; i < n; i++) {
        if (i < c0)
            a[i] = 0;
        else
            a[i] = 1;
    }
}

int main() {
    int x[] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    // method1(x, sizeof(x) / sizeof(x[0]));
    method2(x, sizeof(x) / sizeof(x[0]));
    for (int i : x) cout << i << " ";
    return 0;
}
