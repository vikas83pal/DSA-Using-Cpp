#include<bits/stdc++.h>
using namespace std;
int main(){
    string str ="Welcome To The C++ Programming World";
    int cnt = 0;
    for(int i=0;i<str.size();i++){
        if(isupper(str[i])){
            cnt++;
        }
    }
    cout<< cnt;
    return 0;
}