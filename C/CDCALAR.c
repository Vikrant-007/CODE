#include<iostream.h>
#include<conio.h>
#include<math.h>
void calar(int a)
{float ar;
 ar=3.14*a*a;
 cout<<"\n area of circle is :"<<"  "<<ar;
}
void calar(int a,int b)
{float ar;
 ar=a*b;
 cout<<"\n area of rectangle is :"<<"  "<<ar;
}
void main()
{
  clrscr();
  calar(5);
  calar(6,7);
  getch();
}