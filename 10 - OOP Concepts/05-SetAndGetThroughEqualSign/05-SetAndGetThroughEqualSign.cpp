#include <iostream>

using namespace std;

class clsPerson
{
private:
	string _FirstName;
	string _LastName;

public:
	
	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string GetFirstName()
	{
		return _FirstName;
	}

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string GetLastName()
	{
		return _LastName;
	}
	__declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
	__declspec(property(get = GetFirstName, put = SetFirstName)) string LastName;
	
};

int main()
{
	clsPerson person1; 

	person1.SetFirstName("Abdurrezzak");
	cout << "First Name: " << person1.GetFirstName() << endl;

	//instead of the above we only write this
	person1.FirstName = "Abdurrezzak";
	cout << "First Name: " << person1.FirstName << endl;
	person1.LastName = "Ekidi";
	cout << "Last Name: " << person1.LastName << endl;f

}

