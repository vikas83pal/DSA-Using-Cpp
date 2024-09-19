#include<bits/stdc++.h>
using namespace std;
int SecondLargestEle(vector<int> &arr,int n){
    int largest = arr[0], sLargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i] > largest || arr[i] > sLargest) {
            sLargest = largest;
            largest = arr[i];
        }
    }
    return sLargest;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res = SecondLargestEle(arr,n);
    cout << res;
    return 0;
}