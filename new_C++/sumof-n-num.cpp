#include<iostream>
using namespace std;

int nSum(int num){
    
    int sum = num*(num + 1)/2;
    return sum;
}

int main(){

    int n;
    cin>>n;
    int ans = nSum(n);
    cout<<ans;

    return 0;
}