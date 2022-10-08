#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    // int index = -1;
    // for (int i = 0; i < n; i++)
    // {
    //     int find = a[i];
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (find == a[j] && index == -1)
    //         {
    //             index = i;
    //         }
            
    //     }
        
    // }
    // cout<<index;
    const int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minidx = min(minidx,idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
        
    }
    
    if (minidx == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minidx + 1<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<idx[i]<<" ";
    }
    
    return 0;
}
