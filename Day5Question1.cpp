#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    int arr1[100], arr2[100], result[200];
    
    cin >> n1;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }
    
    while (i < n1) result[k++] = arr1[i++];
    while (j < n2) result[k++] = arr2[j++];
    
    for (int i = 0; i < k; i++) {
        cout << result[i];
        if (i < k - 1) cout << " ";
    }
    cout << endl;
    
    return 0;
}