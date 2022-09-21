#include <iostream>
using namespace std;

void area(int a,int b)
{
    cout << 2*(a+b);
}
void area(int a,int b,int c)
{
    cout << a+b+c;
}

int main()
{
    area(2,3);

    return 0;
}