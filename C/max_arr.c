#include<stdio.h>
void main()
{
    int a[10] ,max=0;
    
    printf("enter the elements of array");
    
    for (int i = 0; i < 10; i++)
    {
      scanf("%d",&a[i]);
    }

    for ( int i=0; i != 10; i++)
    {
     if (a[i]>max)
             {
                 max=a[i];
             }
    }
    
  printf("max no. is %d",max);
}