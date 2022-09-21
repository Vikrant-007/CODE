#include<iostream>
using namespace std;

int fact(int num){
    int p=1;
    for (int i = 2; i <= num; i++)
    {
        p*=i;
    }
    return p;
}

int main(){
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans;
    return 0;
}