#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxsum=nums[0];
        int currsum=nums[0];

        for(int i=1;i<n;i++)
        {
            if(currsum<0)
            {
                currsum=nums[i];
            }
            else
            {
                currsum=currsum + nums[i];
            }

            if(currsum>maxsum)
            {
                maxsum=currsum;
            }
        }
        return maxsum;
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
    int result=obj.maxSubArray(arr);
    cout << "Maximum subarray sum: " << result << endl;

    return 0;
}