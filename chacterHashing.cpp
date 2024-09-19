#include<bits/stdc++.h>
using namespace std;
int hashing(string str,char data){
    int cnt = 0;
    for(int i=0;i<str.size();i++){
        if(str[i] == data){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    string str;
    cin >> str;
    char data;
    cin >> data;
    cout << hashing(str,data);
    return 0;
}