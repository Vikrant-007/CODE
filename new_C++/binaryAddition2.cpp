#include<iostream>
using namespace std;

int binarySum(int a, int b)
{
    int ans = 0, carry = 0;

    while (a>0 && b>0)
    {
        if (a%2 == 0 && b%2 == 0)
        {
            ans = ans*10 + carry;
            carry = 0;
        }
        else if ((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0))
        {
            if (carry == 1)
            {
                ans = ans*10 +0;
                carry = 1;
            }
            else 
            {
                ans = ans*10 + 1;
                carry = 0;
            }  
        }
        else
        {
            ans = ans*10 + carry;
            carry = 1;
        }
        a /= 10;
        b /= 10;
    }
    
    while (a>0)
    {
        if (carry == 1)
        {
            ans = ans*10 +0;
            carry = 1;
        }
        else 
        {
            ans = ans*10 + 1;
            carry = 0;
        }
    }
    
    

    return ans;
}

int main()
{
    int x, y;
    cin>>x>>y;

    cout<<binarySum(x,y)<<endl;

    return 0;
}