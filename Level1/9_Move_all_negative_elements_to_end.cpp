#include <iostream>
using namespace std;

void segregateElements(int arr[], int n) {
    int ne = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] < 0) ne++;
    int pos = n - ne;
    for (int i = 0, j = pos - 1; i < n && j < n; i++) {
        if (arr[i] < 0) {
            swap(arr[i], arr[j]);
            j--;
        }
    }
}

int main() {
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    segregateElements(arr, sizeof(arr) / sizeof(arr[0]));
    for (int i : arr) cout << arr[i] << " ";
    return 0;
}