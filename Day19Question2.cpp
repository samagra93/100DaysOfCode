#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;

        int currMax = 0, maxSum = INT_MIN;
        int currMin = 0, minSum =  INT_MAX;

        for (int num : nums) {
            currMax = max(num, currMax + num);
            maxSum = max(maxSum, currMax);

            currMin = min(num, currMin + num);
            minSum = min(minSum, currMin);

            total += num;
        }

        if (maxSum < 0)
            return maxSum;

        return max(maxSum, total - minSum);
    }
};

int main() {
    Solution obj;
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int result = obj.maxSubarraySumCircular(arr);
    cout << "Maximum circular subarray sum: " << result << endl;

    return 0;
}