#include <iostream>
using namespace std;

class clsPerson
{
public:
    /*
    The virtual keyword lets the program decide which function to 
    run at runtime. This ensures that the correct overridden function
    is called, even when using a base class pointer or reference
    */
   virtual void print()
    {
        cout << "Hi, i'm a person\n";

    }

};

class clsEmployee :public clsPerson
{
public: 
    
    void print()
    {
        cout << "Hi, i'm an employee\n";
	}
    
};

class clsStudent :public clsPerson
{
public:
    
    void print()
    {
        cout << "Hi, i'm a student\n";
	}
    

};

int main()
{
    clsEmployee employee1;
    clsStudent student1;

	employee1.print();
	student1.print();

	clsPerson* person1 = &employee1;
	clsPerson* person2 = &student1;

    person1->print();
	person2->print();
    
}


