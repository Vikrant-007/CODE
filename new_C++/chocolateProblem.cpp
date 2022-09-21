#include<iostream>
using namespace std;

int main()
{   int n = 15,left = 0, count = 0;
    while (n!=0)
    {
        n = (left + i)/3;
        cout<<temp<<" :temp"<<endl;
        count += i;
        cout<<count<<" :count"<<endl;
        if (i%3 != 0)
        {
            left = n%3;
        }
        cout<<left<<" :left"<<endl;
    }
    cout<<count<<endl;

    return 0;
}