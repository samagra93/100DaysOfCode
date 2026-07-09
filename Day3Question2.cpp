#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        int ans = n; 

        for (int i = 0; i < n - 1; i++) {
            ans ^= (i + 1); // XOR numbers 1 to n-1
            ans ^= arr[i];  // XOR array elements
        }

        return ans;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> arr(n - 1);

    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    Solution obj;
    cout << obj.missingNum(arr) << endl;

    return 0;
}