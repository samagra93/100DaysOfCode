#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m + n - 1;
       
        while(m>0 && n>0)
        {
            if(nums1[m-1]>nums2[n-1])
            {
                nums1[last]=nums1[m-1];
                m--;
                last--;
            }
            else
            {
                nums1[last]=nums2[n-1];
                n--;
                last--;
            }
        }
        while(n>0)
        {
            nums1[last]=nums2[n-1];
            n--;
            last--;
        }
    }
};

int main() {
    int m, n;
    cin >> m >> n;

    vector<int> nums1(m + n);
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    vector<int> nums2(n);
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    Solution obj;
    obj.merge(nums1, m, nums2, n);

    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}