#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2], m2[n2][n3], p[n1][n2];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin>>m1[i][j];
        }
        
    }
    
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin>>m2[i][j];
        }
        
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            int sum = 0;
            for (int k = 0; k < n2; k++)
            {
                sum += m1[i][k]*m2[k][j];
            }
            p[i][j] = sum;
        }
        
    }
    cout<<"**********************************\n";

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<p[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    

    return 0;
}