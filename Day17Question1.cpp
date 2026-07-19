#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void max_min(vector<int>& arr)
    {
        int max=arr[0];
        int min=arr[0];
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        cout << "Maximum element: " << max << endl;
        cout << "Minimum element: " << min << endl;
    }
};

int main()
{
    Solution obj;
    vector<int> arr;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    obj.max_min(arr);
  
    return 0;
}

