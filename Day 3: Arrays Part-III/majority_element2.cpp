#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>& nums,int n){
    map<int,int> mp;
    for (auto i: nums){
        mp[i]++;
    }
    for (auto i:mp){
        if (i.second>n/2){
            return i.first;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    // vector<int> result=majority(nums,n);
    // for(auto i: result){
    //     cout<<i;
    // }
    int result=majority(nums,n);
    cout<<result;
    return 0;
}