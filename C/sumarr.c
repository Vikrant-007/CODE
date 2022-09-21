#include<stdio.h>
int main()
{
    int a[5] , i=0,sum=0;
    printf("enter the arry elements");

    for(i=0;i<5;++i)
    {
      scanf("%d",&a[i]);
    }
    printf("array is ");
    for ( i = 0; i < 5; i++)
    {
      printf("%d  ",a[i]);

    }
    

    for(i=0;i<5;++i)
    {
        sum= sum+ a[i];
    }
    printf("\nsum is %d",sum);
    return 0;

}