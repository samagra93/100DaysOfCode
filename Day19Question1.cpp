#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<int> &arr) {
        int n = arr.size();
        int left=0;
        int right=n-1;
        int minSum=INT_MAX;
        int resLeft=0, resRight=0;

        sort(arr.begin(), arr.end()); 
        while (left < right) 
        {
            int sum = arr[left] + arr[right];
            
            if (abs(sum) < abs(minSum)) {
                minSum = sum;
                resLeft = arr[left];
                resRight = arr[right];
            }
            
            if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }  

        cout << resLeft << " " << resRight << endl;
    }
};
int main()
{
    Solution obj;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    obj.solve(arr);

}