#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0;
        int top=0;
        int right=n-1;
        int bottom=m-1;
        int index=0;
        vector<int> result;

        while(left<=right && top<=bottom)
        {
            for(int j=left;j<=right;j++)
            {
             result.push_back(matrix[top][j]);
            }
            top++;

            for(int i=top;i<=bottom;i++)
            {
                result.push_back(matrix[i][right]);
            } 
            right--;

            if(top<=bottom)
            {
                for(int j=right;j>=left;j--)
                {
                    result.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                     result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
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
    vector<int> result=obj.spiralOrder(matrix);
    for(int i=0;i<result.size();i++)
        cout<<result[i]<<" ";
}