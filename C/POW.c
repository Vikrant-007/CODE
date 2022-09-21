#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
  clrscr();
  int i=1,n=0;
  while(i<=10)
  {n=pow(2,i);
  printf("%d\n",n);
  ++i;
  }
  getch();
  }