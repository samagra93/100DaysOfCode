#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int a = nums[i];
            int need = target - a;

            if (mpp.find(need) != mpp.end()) {
                return {mpp[need], i};
            }

            mpp[a] = i;
        }

        return {-1, -1};
    }
};

int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    vector<int> ans = s.twoSum(nums, target);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}