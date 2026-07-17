#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> diagonalsum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        int sum=0;
        for(int i=0;i<m;i++)
        {
             for(int j=0;j<n;j++)
             {
                 if(i==j)
                 {
                     sum+=matrix[i][j];
                 }
             }
        }
        return {sum};
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
    vector<int> result=obj.diagonalsum(matrix);
    cout<<result[0]<<endl;
}