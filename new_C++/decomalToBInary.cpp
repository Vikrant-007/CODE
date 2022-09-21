#include<iostream>
using namespace std;

int decimalToBinary(int n)
{
    int ans = 0, x = 1;
    while (x <= n)
    {
       x *= 2;
    }
    x/=2;
    while (x>0)
    {
        int ld = n/x;
        n -= ld*x;
        x /= 2;
        ans = ans*10 + ld;
    }
    
    
    return ans;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<decimalToBinary(n)<<endl;

    return 0;
}