#include<bits/stdc++.h>
using namespace std;
void splitArray(int arr[],int n){
    int pos[n/2];
    int neg[n/2];
    for(int i =0;i<n;i++){
            if(arr[i] < 0){
                neg[i/2] =arr[i];
            }else{
                pos[i/2] = arr[i];
            }
    }
    for(int i=0;i<n/2;i++){
        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
    }
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    splitArray(arr,n);
    for(int i=0;i<n;i++){
      cout<< arr[i]<< " ";
    }
    return 0;
}