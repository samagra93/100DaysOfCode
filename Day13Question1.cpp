#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
    void MatrixWalk(vector<vector<int>>& matrix) {
      int m = matrix.size();
      int n = matrix[0].size();

      int top,bottom,left,right;
      top=0;    
      bottom=m-1;
      left=0;
      right=n-1;

       while (top <= bottom && left <= right) 
    {
        
        for (int j = left; j <= right; j++) {
            cout << matrix[top][j] << " ";
        }
        top++;
        
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--;
        
        // Bottom row (if exists)
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                cout << matrix[bottom][j] << " ";
            }
            bottom--;
        }
        
        // Left column (if exists)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
    cout << endl;
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
    obj.MatrixWalk(matrix);
    
}