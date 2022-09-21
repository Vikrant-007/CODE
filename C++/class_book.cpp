#include <iostream>
using namespace std;

class book
{
public:

    string title;
    string author;
    int pages;
    book() 
    {
        title = "no title";
        author = "no author";
        pages = 0;
    }
    book(string atitle, string aauthor, int apages) 
    {
        title = atitle;
        author = aauthor;
        pages = apages;
    }

};


int main()
{
    book book1("harry potter", "jk rowling", 700);
    cout << book1.title;

    book book2("jamunda", "hi-10", 168);

    return 0;
}