#include<stdio.h>
void main()
{
    int a[5] ,num,ans=0;
    
    printf("enter the elements of array");
    
    for (int i = 0; i < 5; i++)
    {
      scanf("%d",&a[i]);
    }
    printf("enter the number you want to check");
    scanf("%d",&num);

    for ( int i = 0; i != 5; i++)
    {
      
      if (num==a[i])
      {
        ans=1;
      }
    }
    if (ans==1)
    {
        printf("number is in array");   
    }
    else
    {
        printf("number is not in array");
    }
  
}