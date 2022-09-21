#include<iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;
    int** ptr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        int* b = new int [k];
        for (int j = 0; j < k; j++)
        {
            int temp;
            cin >> temp;
            b[j] = temp;
        }
        *(ptr + i) = b;
    }

    for (int i = 0; i < q; i++)
    {
        int r,s;
        cin >> r >> s;
        cout << ptr[r][s] << endl;
    }
    
    return 0;
}