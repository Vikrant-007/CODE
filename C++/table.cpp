#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cout << "enter any no: ";
    cin >> n;
    cout << "enter no of terms: ";
    cin >> t;

    cout << "table of " <<n<< "upto " << t<< "terms is: "<< endl;

    for (int i = 1; i <= t; i++)
    {
        cout<< n << "  x  " << i << "  =  " << n*i <<endl;
    }
    
    

    return 0;
}