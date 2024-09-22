#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void duplicates(vector<int>& arr){
    map<int,int> mp;
    for (auto i:arr){
        mp[i]++;
    }
    for (auto i:mp){
        if (i.second!=1){
            cout<<i.first<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    duplicates(arr);

    return 0;
}