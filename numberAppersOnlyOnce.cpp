#include<bits/stdc++.h>
using namespace std;

int numberAppersOnce(int arr[],int n) {
    int res = 0;
    for(int i=0;i<n;i++) {
        res = res ^ arr[i];
    }
    return res;
}

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>> arr[i];
    }
    int res = numberAppersOnce(arr,n);
    cout<< res;
    return 0;
}