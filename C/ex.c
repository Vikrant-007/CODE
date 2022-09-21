#include<stdio.h>

int main()
{
  int a[5],sum=0;
  float avg;
  printf("enter an array:  ");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d",&a[i]);
  }
  
  for (int i = 0; i < 5; i++)
  {
    sum += a[i];
  }
  printf("\nSum of given array is:  %d",sum);
  avg=sum/5;
  printf("\nAverage of given array is:  %.2f",avg);

  return 0;
}