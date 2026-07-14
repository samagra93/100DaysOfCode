#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> ans(n, vector<int>(m));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[j][i] = matrix[i][j];
            }
        }

        return ans;
    }
};

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    Solution obj;
    vector<vector<int>> transposedMatrix = obj.transpose(matrix);   

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << transposedMatrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}