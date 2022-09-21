#include <stdio.h>

int main() 
{
char name[20];
int len,i,j;
printf("Enter your name ");
scanf("%s",&name);

for (  i = 0 ; name[i]!='\0' ;i++)
{
    len=i;
}
for ( j = len; j >= 0; j--)
{
   printf("%c",name[j]);
}

return 0;
}
