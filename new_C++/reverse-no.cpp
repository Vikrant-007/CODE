#include<iostream>
using namespace std;

int main() {
    int n,m=0;
    cin>>n;
    for (int i = n; i != 0; i/=10)
    {
        m = (m*10) + (i%10);
    }
    cout<<m;

    return 0;
}