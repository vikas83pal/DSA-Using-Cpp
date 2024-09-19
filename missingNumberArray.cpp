#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& arr){
    int n = arr.size();
    for(int i=1;i<=n;i++){
        int flag = 0;
        for(int j=0;j<n-1;j++) {
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }

        if(flag == 0) return i;
    }

}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];

    }
    int res = missingNumber(arr);
    cout<< res;
    return 0;
}