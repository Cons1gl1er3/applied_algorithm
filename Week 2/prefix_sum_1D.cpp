#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, -3, 5, -10, -20, 4, 18, 30};
    int S[9] = {0};
    int sum = 0;
    for (int i=1; i<9; i++) {
        S[i] = sum+=arr[i-1];
        cout << S[i] << " ";
    }
    cout << endl;

    int i, j;
    cin >> i >> j;
    cout << S[j] - S[i-1];
    cout << endl;
}