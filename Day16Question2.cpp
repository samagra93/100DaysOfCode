#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
}
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k = k%n;

        reverse(nums, 0, n- 1);      
        reverse(nums, 0, k - 1);         
        reverse(nums, k, n - 1);     
    }
};

int main(){
    
    Solution obj;
    vector<int> arr;
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    obj.rotate(arr,k);
    cout << "Rotated array: " << endl;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}