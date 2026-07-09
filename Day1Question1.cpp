#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1000];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int pos, x;
    cin >> pos ;
    cin >> x;

    for (int i=n; i>=pos; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos-1]=x;
    n++;

    for (int i=0; i<n; i++)
    {
        cout << arr[i] ;
        if (i<n-1)
        {
            cout << " ";
        }

    }
    return 0;
}