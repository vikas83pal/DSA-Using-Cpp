#include<bits/stdc++.h>
using namespace std;
void binarySearch(int arr[],int n,int s){
    int low = 0,high = n-1,mid = 0;
    while(low<=high) { 
        mid = low + (high - low) / 2;
        if(s == arr[mid]){
            cout << s << " is found at " << mid << endl;
            return;
        }
        if(s < arr[mid]){
            high =  mid - 1;
        }else{
            low = mid + 1;
        }
    }
    cout << s << " is not found"<< endl;
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
    binarySearch(arr,n,s);
    return 0;
}