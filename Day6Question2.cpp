#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                if (i != k)
                    swap(nums[i], nums[k]);
                k++;
            }
        }
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    obj.moveZeroes(nums);

    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}