#include <iostream>
using namespace std;

int main()
{
    string A;
    string P;
    int count=0;

    cin >> A;
    cin >> P;
    
    for (int i = 0; i < A.length(); i++)
    {
        if ( A[i] == P[i] )
        {
            ++count;
        }
        
    }
    cout << count;
    



    return 0;
}