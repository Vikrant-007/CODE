#include <iostream>
using namespace std;

int main()
{
    string name[5];
    cout << "enter name of students";

    for (int i = 0; i < 5; i++)
    {
        getline(cin,name[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << name[i] << endl;
    }
    

    return 0;
}