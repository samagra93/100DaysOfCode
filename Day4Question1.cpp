#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void reverse(vector<int>& arr, int n){
        int temp=0;
        int left = 0;
        int right = n-1; 
        while(left<right)
        {
            temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;   
        }
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    obj.reverse(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}