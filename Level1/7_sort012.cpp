// { Driver Code Starts
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// } Driver Code Ends

class Solution {
public:
    // Method 2 : Count no. of 0s, 1s, 2s - (Traverse twice)
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
        ob.Method2(a, n);
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
