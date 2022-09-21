#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int amt;
    float bal;
    cin >> amt ;
    cin >> bal;
    if (amt%5==0 && (amt+0.5)<bal)
    {
        bal= (bal - amt - 0.50);
        cout << fixed << setprecision(2) << bal;
    }
    else
    {
        cout << fixed << setprecision(2) << bal;
    }
    return 0;
}