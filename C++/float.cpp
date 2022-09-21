#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a = 5.01;

    cout << fixed << setprecision(1) << a;

    return 0;
}