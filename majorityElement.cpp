#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                cnt++;
            }
        }
        if (cnt > n / 2) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int res = majorityElement(arr, n);
    cout << res;
    return 0;
}