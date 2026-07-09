#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, comparisons = 0;
    int arr[100];
    int found = -1;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    
    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) {
            found = i;
            break;
        }
    }
    
    if (found != -1) {
        cout << "Found at index " << found << endl;
    } else {
        cout << "Not Found" << endl;
    }
        cout << "Comparisons = " << comparisons << endl;
    
    return 0;
}