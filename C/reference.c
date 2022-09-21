#include<stdio.h>

void swap(int*,int*);

void main()
{

    int x=30,y=40;
    printf("\nnon swap %d  %d",x,y);
    swap(&x,&y);
    printf("\nval of x= %d and y= %d",x,y);

}

void swap(int* a ,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\nswap  %d %d",*a,*b);
}