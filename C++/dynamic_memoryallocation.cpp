#include <iostream>
using namespace std;

int main()
{
    int length, sum = 0;
    cout << "enter the number of student" << endl;
    cin >> length;
    int *marks = new int(length);

    cout << "enter marks of student" << endl;

    for (int i = 0; i < length; i++) 
    {
        cin  >>  *(marks + i);
    }

    for (int i = 0; i < length; i++)
    {
        sum += *(marks + i);
    }
    cout << sum;
     

    return 0;
}