#include<bits/stdc++.h>
using namespace std;
int eleCnt(int arr[],int n,int data){
    int cnt = 0;  // sp o(1)
    for(int i = 0; i < n; i++) { //o(n)
        if(data == arr[i]) cnt++;
        
    }
    return cnt;
}
int main(){
    int n;
    cin >> n;
    int arr[n];  //sp o(n)
    for(int i = 0; i < n; i++) {  //o(n)
        cin >> arr[i];
    }
    cout << eleCnt(arr,n,1);
    return 0;
}

//Time Complexity is o(n) + o(n) = o(n)
//space complexity is o(n)