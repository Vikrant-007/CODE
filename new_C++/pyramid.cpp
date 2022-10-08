#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    // cin>>n;
    int sp = 0;
    int st = 0;
    
    for (int i = 0; i < n; i++)
    {
        
        if (i == 0 || i == n)
        {
            for (int j = 0; j < n*2-1; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else
        {
            for (int j = 0; j < n-i; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        
        
        
    }
    

    return 0;
}