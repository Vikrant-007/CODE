#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n,m=0;
    cin>>n;
    for (int i = n; i != 0; i/=10)
    {
        m += pow(i%10,3);
    }

    if (n==m)
    {
        cout<<"yes!!";
    }
    else
    {
        cout<<"no";
    }

    return 0;
}