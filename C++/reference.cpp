#include <iostream>
using namespace std;

int main()
{
    int a;
    int& hello = a;
    cin >> a;
    cout << ++hello;

    return 0;
}