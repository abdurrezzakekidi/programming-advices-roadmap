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
    //Early-Static Bainding
    employee1.print(); // The compiler knows which print() to call during compile time.
    student1.print();


    clsPerson* person1 = &employee1;
    clsPerson* person2 = &student1;
	//Late-Dynamic Binding
    person1->print(); // which `print()` to call? doesn't know employee or student address
    person2->print(); // during runtime, connected print through virtual table "late"
   

}


