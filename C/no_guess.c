#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number, guess, nguess=1;
    srand(time(0));             // creatinh the random number
    number = rand()%100 + 1;   //rand no between 1 to 100
    
    // guessing the number
    do
    {
        printf("Guess the no b/w 1 to 100\n");
        scanf("%d",&guess);
        if (guess > number)
        {
            printf("Lower no. please\n");
        }
        else if (guess < number)    
        {
            printf("Greater no. please\n");
        }
        else if (number = guess)
        {
            printf("You guessed in %d attempts\n",nguess);
        }
        ++nguess;
        
        
    } while (number != guess);
    

    return 0;
    system("pause>0");
}