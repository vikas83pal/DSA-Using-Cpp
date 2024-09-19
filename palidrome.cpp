#include<bits/stdc++.h>
using namespace std;
bool palidrome(int i,string str,int n) {
    if(i >= n/2) return true; //1
    if(str[i] != str[n-i-1]) return false; //0
    return palidrome(i+1,str,str.length());
}
int main(){
    string str;
    cin >> str;
    
    cout  << palidrome(0,str,str.length());
    return 0;
}