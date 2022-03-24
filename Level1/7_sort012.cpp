// { Driver Code Starts
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// } Driver Code Ends

class Solution {
public:
    // Builtin Sort function - log(n) complexity
    void sort012(int a[], int n) { sort(a, a + n); }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        ob.sort012(a, n);
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
