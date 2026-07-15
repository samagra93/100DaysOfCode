#include<bits/stdc++.h>
using namespace std;    

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m =matrix.size();
        int n=matrix[0].size();

        for(int i=0;i<m;i++)
        {
              for(int j=0;j<n;j++)
              {
                if(i>0 && j>0)
                {
                    if(matrix[i][j] != matrix[i - 1][j - 1])
                    {
                        return false;
                    }
                }
              }
        }
        return true;



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
    if(obj.isToeplitzMatrix(matrix))
    {
        cout<<"Toeplitz Matrix"<<endl;
    }
    else
    {
        cout<<"Not Toeplitz Matrix"<<endl;
    }
}