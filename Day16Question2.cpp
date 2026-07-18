#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        
        int n=arr.size();
        k=k%n;
        int space=0;
        for(int i=0;i<k;i++)
        {
            space=arr[n-1];
            for(int j=n-1;j>0;j--)
            {
                
                arr[j]=arr[j-1];
            }
            arr[0]=space;
        }
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