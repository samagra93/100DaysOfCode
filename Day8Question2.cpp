#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;

        return((n & (n-1)) == 0);
    }
};
int main() {
    int n;
    cin >> n;

    Solution obj;
    bool result = obj.isPowerOfTwo(n);

    if (result) {
        cout << n << " is a power of two." << endl;
    } else {
        cout << n << " is not a power of two." << endl;
    }

    return 0;
}