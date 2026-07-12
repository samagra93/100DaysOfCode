#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int power(int n,int p)
    {
        if(p==0) return 1;
        return n*power(n,p-1);
    }
};

int main()
{
    int n,p;
    cin >> n >> p;
    Solution obj;
    int k = obj.power(n,p);
    cout << n << " raised to the power of " << p << " is: " << k << endl;
}