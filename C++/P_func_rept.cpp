#include<iostream>
using namespace std;

void parameter(int a, int b)
{
    cout<<"parameter of parameter is  "<<2*(a+b);
}

void parameter(int a)
{
    cout<<"parameter of square is  "<<4*a;
}

void parameter(int a, int b, int c)
{
    cout<<"parameter of triangle  is  "<<a+b+c;
}

int main()
{
   parameter(40);
   cout<<endl;
   parameter(40, 30);
   cout<<endl;
   parameter(30, 40, 50);
   
   return 0;
   
}