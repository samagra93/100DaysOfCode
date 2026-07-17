#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
    void CheckIdentityMatrix(vector<vector<int>>& matrix) {
      int m = matrix.size();
      int n = matrix[0].size();

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j && matrix[i][j]!=1)
            {
                cout<<"Not Identity Matrix"<<endl;
                return;
            }
            else if(i!=j && matrix[i][j]!=0)
            {
                cout<<"Not Identity Matrix"<<endl;
                return;
            }
        }
    }
    cout<<"Identity Matrix"<<endl;
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
    obj.CheckIdentityMatrix(matrix);
    
}