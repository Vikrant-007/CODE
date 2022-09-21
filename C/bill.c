#include <stdio.h>

void cost(int c)
{
    switch(c)
      {
        case 1:
        printf("samosa -15rs/plate\n");
         break;
        case 2:
         printf("paw bhaji-40rs/plate\n");
          break;
        case 3:
        printf("dosa-50rs/plate\n");
         break;
         case 4:
         printf("full thaali- 100rs/plate\n");
          break;
      }
}

int main()
{
    int i,k;
    char j;
    printf("please enter no between 1 to 4 to see prices for snack\n");
    scanf("%d",&i);

      if (i>=1&&i<=4)
    {
        cost(i);
    }
     
       else if(i>4)
      {
        printf("do you wish to choose again yes:y/no:n\n");
        scanf(" %c",&j);
         if(j=='y')
        {

           for(k=1;k<5;k++)
           {
            printf("%d\n",k);
           }
           printf("choose from above numbers\n");
           scanf("%d",&i);
           cost(i);


        }
         else(j=='n');
         printf("ok, then bye bye ,please visit again\n");
        
      }
    return 0;
}