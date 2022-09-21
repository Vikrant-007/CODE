#include <iostream>
using namespace std;

void display(char *);

void display(string);

int main()
{
    string str1;
    char str[100];
    cout << "Enter a string: ";
    getline(cin, str1);
    cout << "Enter another string: ";
    cin.get(str, 100, '\n');
    display(str1);
    display(str);
    return 0;
}
void display(char *ch)
{
    cout<<ch;
}

void display(string s1)
{
    cout<<s1;
}

