#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void reverse(vector<int>& arr , int start, int end)
    {
        while (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& arr, int k)
    {
        int n = arr.size();
        k = k % n; // Handle cases where k is greater than n
        reverse(arr, 0, n - 1);
        reverse(arr, 0, k - 1);
        reverse(arr, k, n - 1);
    }
};

int main()
{
    Solution solution;
    int n,k;
    cin >> n;
    vector<int> arr;
    

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    cin >> k;

    solution.rotate(arr, k);

    cout << "Rotated array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
