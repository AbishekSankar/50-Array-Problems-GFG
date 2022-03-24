#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Method 3 : Dutch national flag problem - (Traverse Once)
void Method3(int a[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (a[mid] == 0)
            swap(a[low++], a[mid++]);
        else if (a[mid] == 1)
            mid++;
        else if (a[mid] == 2)
            swap(a[mid], a[high--]);
    }
}

// Method 2 : Count no. of 0s, 1s, 2s - (Traverse Twice)
void Method2(int a[], int n) {
    int c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0)
            c0++;
        else if (a[i] == 1)
            c1++;
        else
            c2++;
    }
    int i = 0;
    while (c0 > 0) {
        a[i++] = 0;
        c0--;
    }
    while (c1 > 0) {
        a[i++] = 1;
        c1--;
    }
    while (c2 > 0) {
        a[i++] = 2;
        c2--;
    }
}

// Method 1 : Builtin Sort function - log(n) complexity
void Method1(int a[], int n) { sort(a, a + n); }

int main() {
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    Method3(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}