#include <iostream>

using namespace std;

/*
    Struct is a data type used to group multiple variables together under one name.
    With structs, we don't need to declare the same variables repeatedly when creating new instances (e.g., students).
    However, structs have some limitations. For example, we can't use them to encapsulate behavior (functions) in the same way as classes.
    While it's possible to add functions to a struct, doing so may lead to confusion — this will become clearer as we progress through the course.
*/
struct stStudent
{
    string firstName;
    string lastName;
};

/*
    Class:
    A class is similar to a struct but also allows us to define functions (called methods).
    You can think of a class as a blueprint for creating objects.
    In addition to storing data, a class can define behavior.
*/
class clsPerson
{

public:
    string FirstName;
    string LastName;


    string FullName()
    {
		return FirstName + " " + LastName;
    }

private:
    //If we don't explicitly declare this as 'private', it would still be private by default.
    int x;
};

int main()
{
    clsPerson person1; // Creating an object of clsPerson

    person1.FirstName = "Abdurrezzak";
    person1.LastName = "Ekidi";
	cout << person1.FullName() << endl;

    // Another example of a class and object:
    string s1 = "ProgrammingAdvices"; // 'string' is a class, and 's1' is an object of that class.
    s1.push_back('s'); // 'push_back' is a method defined in the string class.

    


    
	return 0;
    
}


