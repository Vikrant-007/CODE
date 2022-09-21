#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    string profession;
    int age;
    void introYsf()
    {
        cout << "Name is " << name <<endl;
        cout << "Professsion is " << profession <<endl;
        cout << "Age is " << age << endl;
        
    }
};

int main()
{
    Employee em, em1;
    em.name = "Chacha";
    em.profession = "Vidhayak";
    em.age = 45;
    em.introYsf();
 
    em1.name = "Roni Bhaiya";
    em1.profession = "Chacha Vidhayak Hai";
    em1.age = 25;
    em1.introYsf();

    return 0;
}