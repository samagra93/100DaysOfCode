#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
        void check(vector<vector<int>>& matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        if (m != n) {
             cout << "Not Symmetric";
             return;
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if(matrix[j][i] != matrix[i][j])
                {
                    cout << "Not Symmetric" << endl;
                    return;
                }
                
            }
        }
        cout << "Symmetric " << endl;
    }
};

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    Solution obj;
    obj.check(matrix);   
}