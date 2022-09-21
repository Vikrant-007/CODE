#include <stdio.h>

void morning();
void afternoon();
void evening();

int main()
{
    morning();
    
    return 0;
}


void morning()
{
    printf("good morning\n");
    afternoon();
}
void afternoon()
{
    printf("good afternoon\n");
    evening();
}
void evening()
{
    printf("good evening\n");
}