#include<stdio.h>

int sum(int x,int y,int z)
{
     int s;
     s=4*x+5*y+9*z;
     return(s);
     
}
void main()
{
     int a,b,c;
     printf("enter 3 no's ");
     scanf("%d %d %d",&a,&b,&c);
     int SUM = sum(a,b,c);
     printf("sum is %d",SUM);
}