#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int ele){
    int n = arr.size();
    for(int i=0; i<n; i++) {
        if(arr[i] == ele){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {5, 2, 1, 7, 9};
    int ele;
    cin >> ele;
    int ans = linearSearch(arr, ele);
    cout << ans;
    return 0;
}