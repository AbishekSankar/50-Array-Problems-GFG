#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int findFrequency(vector<int> v, int x) {
    int c = 0;
    for (int i : v)
        if (i == x) c++;
    return c;
    // return count(v.begin(), v.end(), x);
}

int main() {
    vector<int> v = {1, 1, 1, 1, 1};
    int x = 1;
    cout << "\nCount : " << findFrequency(v, x);
    return 0;
}