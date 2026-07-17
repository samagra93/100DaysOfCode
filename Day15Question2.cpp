#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        // vector<int> col(m, 0); -> matrix[0][j]
        // vector<int> row(n, 0); -> matrix[i][0]
        int col0=1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                     matrix[i][0]=0; // row[i]=1;
                     if(j!=0)
                         matrix[0][j]=0; // col[j]=1;
                     else
                        col0= 0;
                }
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]!=0)
                {
                    if(matrix[0][j] == 0 || matrix[i][0] == 0)
                    {
                        matrix[i][j]=0;
                    }
                }
            }
        }

        if(matrix[0][0]==0)
        {
            for(int j=0;j<m;j++)
            {
                matrix[0][j]=0;
            }
        }

        if(col0 == 0)
        {
            for(int i=0;i<n;i++)
            {
                matrix[i][0]=0;
            }
        }
    }
};

int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> matrix(m,vector<int>(n));
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];

    Solution obj;
    obj.setZeroes(matrix);
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}