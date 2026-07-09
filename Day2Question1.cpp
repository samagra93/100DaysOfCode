#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, pos;
    int arr[100];
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cin >> pos;
    
    // Shift elements left
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    cout << "Array after deletion: " << endl;
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i];
        if (i < n - 2) cout << " ";
    }
    cout << endl;
    
    return 0;
}