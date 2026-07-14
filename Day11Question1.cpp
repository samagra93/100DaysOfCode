#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> add(vector<vector<int>> mat1,
                            vector<vector<int>> mat2,
                            int m, int n)
    {
        vector<vector<int>> mat3(m, vector<int>(n));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
        }

        return mat3;
    }
};

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> mat1(m, vector<int>(n));
    vector<vector<int>> mat2(m, vector<int>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> mat1[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> mat2[i][j];

    Solution obj;
    vector<vector<int>> mat3 = obj.add(mat1, mat2, m, n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << mat3[i][j] << " ";
        cout << endl;
    }

    return 0;
}