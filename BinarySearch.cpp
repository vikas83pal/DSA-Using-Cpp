#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int ele){
   int low = 0;
   int high = n - 1;
   
    while(low <= high){
        int mid = low + (high - low) /2;
        if(ele == arr[mid]) return mid;
        if(ele < arr[mid]) {
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
     for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
    int s;
    cin >> s;
    cout << binarySearch(arr,n,s);
    return 0;
}