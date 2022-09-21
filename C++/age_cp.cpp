using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge)
    {
        if (initialAge<0)
        {
            initialAge = 0;
            cout << "Age is not valid, setting age to 0.\n";
        }
        

    }

    void Person::amIOld()
    {
        if (/* condition */)
        {
            /* code */
        }
         

    }

    void Person::yearPasses()
    {
        // Increment the age of the person in here
        

    }

int main()
{
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) 
    {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        p.yearPasses(); 
    }
    p.amIOld();
      
	cout << '\n';
}

    return 0;
}