#include<iostream>
using namespace std;

enum class STUDENT
{
    Ram,
    Sham,
    Raju,
    Chotu,
    Chintu
};

int main()
{
    STUDENT pass = STUDENT::Ram;
    STUDENT first = STUDENT::Ram;

    if (pass == first)
    {
        cout<<"given enum. are equal";  // here we can compare 2 enum derived from 1 class
    }                                   // but cant compare enum of diff class
    
    cout<<endl<<static_cast<int>(pass);
    
    return 0;
}