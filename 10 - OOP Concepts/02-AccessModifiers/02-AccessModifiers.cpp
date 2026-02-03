#include <iostream>

using namespace std;

class clsPerson
{
private:
	// only accessible inside this class
	int variable1 = 5;
	int function1()
	{
		return 40;
	}

protected:
	// accessible inside this class and all classes inherits this class
	int variable2 = 100;
	int function2()
	{
		return 50;
	}

public:
	// accessible for everyone outside/inside/and classes ingerits this class
	string FirstName;
	string LastName;
	string FullName()
	{
		return FirstName + " " + LastName;
	}

	float Function3()
	{

		return function1() * variable1 * variable2;
	}


};


int main()
{
	clsPerson person;

	person.FirstName = "Abdurrezzak";
	person.LastName = "Ekidi";
	
	cout << "Full Name: " << person.FullName() << endl;
	cout << person.Function3() << endl;
	
	
	return 0;
    
}


