#include<stdio.h>

struct student
{
    char name[20];
    int age;

};

int main()
{
    struct student s = {"Vikrant",18};
    struct student *ptr;
    ptr = &s;
    printf("Name: %s",ptr->name);
    printf("\nAge : %d\n",ptr->age);

    return 0;
}