#include<stdio.h>
#include<string.h>

union student
{
    char name[20];
    int age;
}s1;


int main()
{
    s1.age=16;
    strcpy(s1.name, "tom");
    printf("your name is %s and you %d year old",s1.name,s1.age);
    printf("size of above union is %d",sizeof(s1));
}