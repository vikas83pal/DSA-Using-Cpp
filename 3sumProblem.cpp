#include<bits/stdc++.h>
using namespace std;

//brute force Tc O(N^3) 
vector<vector<int>> SumProblem(vector<int> &arr){
    int n = arr.size();
    vector<vector<int>> ans;
    set<vector<int>> st;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == 0){
                    vector<int> temp;
                    temp.emplace_back(arr[i],arr[j],arr[k]);
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
              
            }
        }
    }
    ans.emplace_back(st.begin(),st.end());
    return ans;
}

//better approach Tc O(N^2 log(no of elemenst of set))
vector<vector<int>> SumProblem(vector<int> &arr){
    int n = arr.size();
    vector<vector<int>> ans;
    set<vector<int>> st;
    for(int i=0; i<n; i++){
        set<int> hashSet;
        for(int j=i+1; j<n; j++){
           int third = - (arr[i] + arr[j]);
           if(hashSet.find(third) != hashSet.end()){
            vector<int> temp;
            temp.emplace_back(arr[i],arr[j],third);
            sort(temp.begin(),temp.end());
            st.insert(temp);
           }
        }
    }
    ans.emplace_back(st.begin(),st.end());
    return ans;
}


//optimal approach
vector<vector<int>> SumProblem(vector<int> &arr){
    int n = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        if(i > 0 && arr[i] == arr[i - 1]) continue;
        int j = i+1;
        int k = n-1;
        while(j < k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum > 0){
                k--;
            }else if(sum < 0){
                j++;

            }else{
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j < k && arr[j] == arr[j-1]) j++;
                while(j < k && arr[k] == arr[k+1]) k--;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,4,-8,-7,9,-10};
    
    return 0;
}