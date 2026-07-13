#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        vector<int> result;

        for(int x:nums1)
        {
            map[x]++;
        }

        for(int x:nums2)
        {
            if(map[x]>0)
            {
                result.push_back(x);
                map[x]--;
            }
        }

        return result;
    }
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> nums1(n1);
    vector<int> nums2(n2);

    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }

    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    Solution obj;
    vector<int> result = obj.intersect(nums1, nums2);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}