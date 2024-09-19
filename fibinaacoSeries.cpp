// #include<bits/stdc++.h>
// using namespace std;
// void fun(int n){
//     int f[n];
//     f[0]=0,f[1]=1;
//     cout << f[0] << " "<< f[1] << " ";
//     for(int i=2;i<=n;i++){
//         f[i] = f[i-1] + f[i-2];
//         cout << f[i] <<" ";
//     }

    
// }
// int main(){
//     int n;
//     cin >> n;
  
//     fun(n);

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int fib(int n) {
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    cin >> n;
    cout << fib(n);
    
    return 0;
}