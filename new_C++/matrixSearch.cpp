#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    int matrix[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    cout<<"*********************************************************\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<matrix[i][j]<<" ";
            
        }
        cout<<endl;
    }
    cout<<"*********************************************************\n";

    int x;
    cin>>x;
    bool flag = false;


    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (matrix[i][j] == x )
    //         {
    //             cout<<"matrix["<<i<<"]["<<j<<"]: "<<x<<endl;
    //             flag = true;
    //         }
    //     }
        
    // }

    //optimised search!!!

    int r = 0, c = n-1;
    while (r < m && c >= 0)
    {
        if (matrix[r][c] == x)
        {
            flag = true;
        }
        matrix[r][c] > x? c-- : r++ ;
    }
    
    if (flag)
    {
        cout<<"Element found.";
    }
    else
    {
        cout<<"Element not found!!!";
    }
    
    
    
    

    return 0;
}