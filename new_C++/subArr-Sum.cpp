#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int S;
    cin>>S;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int minidx = -1;
    int maxidx = -1;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum+=a[j];
            if (sum == S)
            {
                if (minidx == -1 && maxidx == -1)
                {
                minidx = i;
                maxidx = j;
                }
            }
            
        }
        
    }
    cout<<++minidx<<" "<<++maxidx;
    
    return 0;
}