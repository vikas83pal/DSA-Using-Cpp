#include<bits/stdc++.h>
using namespace std;
void moveZeroToEnd(vector<int> &arr,int n){
    int nonZero = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] != 0) {
            swap(arr[nonZero], arr[i]);
            nonZero++;
        }
    }
}
int main(){
    int n;
    cin>> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];

    }
    moveZeroToEnd(arr,n);
    for(int i=0;i<n;i++) {
        cout<< arr[i] << " ";
    }
    return 0;

}