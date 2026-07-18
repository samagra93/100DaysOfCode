#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void countfrequency(vector<int>& arr)
    {
        int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        cout << "Frequency of elements in the array: " << endl;
        for(auto it:mp)
        {
            cout << it.first << " : " << it.second << endl;
        }
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
    obj.countfrequency(arr);
  
    return 0;
}
