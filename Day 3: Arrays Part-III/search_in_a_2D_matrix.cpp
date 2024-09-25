#include<iostream>
#include<vector>
using namespace std;
bool search(vector<vector<int>>& matrix,int target){
    int n=matrix.size();
    int m=matrix[0].size();
    int start=0;
    int end=n*m-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        int midElement=matrix[mid/m][mid%m];
        if (midElement==target){
            return true;
        }else if (target>midElement){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return false;
}
int main(){
    int row,col;
    cin>>row>>col;
    vector<vector<int>>matrix(row,vector<int>(col));
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    int target;
    cin>>target;
    bool ans=search(matrix,target);
    if (ans) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    // ans? true: false;  //may be not working or some syntax issue
    return 0;
}