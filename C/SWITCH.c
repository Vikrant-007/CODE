#include<stdio.h>
#include<conio.h>
 void main()
 {
    clrscr();
    char a;
    scanf("%c",&a);

    switch (a)
    {
    case 'a':
    printf("monday");
    break;
    case 'b':
    printf("tuesday");
    break;
    case 'c':
    printf("wednesday");
    break;
    case 'd':
    printf("thrusday");
    break;
    case 'e':
    printf("friday");
    break;
    case 'f':
    printf("saturday");
    break;
    case 'g':
    printf("sunday");
    break;
    default:
    printf("wrong input");
    break;
    }
    getch();
}