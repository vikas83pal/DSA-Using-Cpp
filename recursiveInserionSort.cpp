#include<bits/stdc++.h>
using namespace std;
void recursiveSort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int j=0;
        while(j > 0 && arr[i-1] > arr[i]) {
            swap(arr[i-1],arr[i]);
            j++;
        }
    }

}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>> arr[i];
    }
    recursiveSort(arr,n);
    for(int i=0;i<n;i++) {
        cout<< arr[i] << " ";
    }
    return 0;
}