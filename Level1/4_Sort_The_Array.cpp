#include <algorithm>  // Header File for sort
#include <iostream>
#include <vector>  // Header File for vector
using namespace std;

vector<int> sortArr(vector<int> arr) {
    sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    vector<int> s = {43, 5, 123, 94, 359, -23, 2, -1};
    vector<int> v = sortArr(s);
    for (auto i : v) cout << i << " ";
    cout << endl;
    return 0;
}
