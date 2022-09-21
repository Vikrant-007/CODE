#include<iostream>
using namespace std;

int binaryToDecimal(int num){
    int ans = 0, x = 1;
    while (num!=0)
    {
        int y = num%10;
        ans += y*x;
        x*=2;
        num/=10;
    }
    
    return ans;
}

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

int binarySum(int a, int b)
{
    int sum;
    sum = binaryToDecimal(a) + binaryToDecimal(b);  
    int ans = decimalToBinary(sum);

    return ans;
}

int main()
{
    int x, y;
    cin>>x>>y;

    cout<<binarySum(x,y)<<endl;

    return 0;
}