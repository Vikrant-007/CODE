#include<iostream>
using namespace std;

void fib(int num){
    int a=0,b=1,sum;
    for (int i = 0; i < num; i++)
    {
        cout<<a<<" ";
        sum = b+a;
        a=b;
        b=sum;
    }
}

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}