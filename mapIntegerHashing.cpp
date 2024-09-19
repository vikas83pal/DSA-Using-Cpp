#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int &a :arr){
        cin >> a;
    }

    map<int,int> mpp;
    for(int i=0;i<n;i++) {
        mpp[arr[i]]++;
    }
    
    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;
        cout<< mpp[number] << " ";
    }
    return 0;
}