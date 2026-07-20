#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> answer(n,1);
        
        for(int i=0;i<n;i++)
        {
            int product=1;
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    answer[i]*=nums[j];
                }
            }
        }
        
        return answer;
    }
};

int main()
{
    Solution solution;
    int n;
    cin >> n;
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = solution.productExceptSelf(nums);

    cout << "Product of array except self: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}