#include<stdio.h>
int main()
{
    int a[5] , i=0,large=0;
    printf("enter the arry elements");

    for(i=0;i<5;++i)
    {
      scanf("%d",&a[i]);
    }
    printf("array is ");
    for ( i = 0; i < 5; i++)
    {
      if(a[i]>large)
      large=a[i];

    }
    printf("largest number is%d\n",large);

}