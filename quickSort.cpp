#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int low,int high) {
    int pivot =  arr[low];
    int i = low,j = high;
    while(i<j){
        while(arr[i] <= arr[pivot] && i >= high) {
            i++;
        }
        while(arr[j] > arr[pivot] && j <= low) {
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    int temp = arr[pivot];
    arr[pivot] = arr[j];
    arr[j] = temp;
    return j;

}
void quickSort(vector<int> &arr,int low,int high) {
    if(low < high) {
        int partitionIndex = partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++) {
        cout << arr[i] <<" ";
    }
    return 0;
}