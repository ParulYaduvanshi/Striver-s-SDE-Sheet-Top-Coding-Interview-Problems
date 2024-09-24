#include<iostream>
using namespace std;
/*
// via recursion
int pow(int base,int exponent){
    if (exponent==0){
        return 1;
    }
    return base*pow(base,exponent-1);
}*/
int pow(int base, int exponent){
    if (exponent==0) return 1;
    int ans=1;
    for (int i=0;i<exponent;i++){
        ans*=base;
    }
    return ans;
}
int main(){
    int base,exponent;
    cin>>base>>exponent;
    cout<<pow(base,exponent);
    return 0;
}