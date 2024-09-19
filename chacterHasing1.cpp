#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;

    //pre compution
    // int hash[26] = {0};
    int hash[255] = {0};
    for(int i=0;i<str.size();i++){
        // hash[str[i] - 'a'] += 1; // a 97
        hash[str[i]] += 1; 
    }

    int q;
    cin >> q;
    while(q--) {
        char c;
        cin >> c;
        
        // cout<< hash[c - 'a'] << " ";
        
        cout<< hash[c] << " ";
    }
    return 0;
}