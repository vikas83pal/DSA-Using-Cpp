#include<bits/stdc++.h>
using namespace std;
void matrixMul(int a[][],int b[][],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int c[i,j]=0;
            for(int k=0;k<n;k++){
                c[i,j] * = a[i,j]+b[i,j]
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    int a[n][n] ,b[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++){
            cin >> a[i][j] ;
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++){
            cin >> b[i][j] ;
        }
    }
    matrixMul(a,b,n);
    return 0;
}