#include<iostream>
using namespace std;

int decimalToOctal(int n)
{
    int ans = 0, x = 1;
    while (x <= n)
    {
       x *= 8;
    }
    x/=8;
    while (x>0)
    {
        int ld = n/x;
        n -= ld*x;
        x /= 8;
        ans = ans*10 + ld;
    }
    
    
    return ans;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<decimalToOctal(n)<<endl;

    return 0;
}