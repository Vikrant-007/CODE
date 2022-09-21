#include<stdio.h>
int main()
{ 
  int i;
  printf("All even numbers between 0 to 100 are:\n");
  i=0;
  while (i<=100)
  {
    if(i%2==0)
    {
      printf("%d " ,i);
    }
    i++;
  }
  
  printf("\nAll odd numbers between 0 to 100 are:\n");
  i=0;
  while (i<=100)
  {
    if(i%2==1)
    {
      printf("%d " ,i);
    }
    i++;
  }
 
  return 0;
}
