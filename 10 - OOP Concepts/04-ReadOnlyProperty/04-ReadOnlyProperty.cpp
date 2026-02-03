#include <iostream>

using namespace std;

class clsPerson
{
private:
    int _ID = 10;
    string _FirstName;
    string _LastName;

public:
	//Property Get, Read-Only Property
    int GetID()
    {
		return _ID;
	}


    //Property Set
    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }
    //Property Get
    string GetFirstName()
    {
        return _FirstName;
    }
    //Property Set
    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }
    //Property Get
    string GetLastName()
    {
        return _LastName;
    }
    //Property Get
    string GetFullName()
    {
        return _FirstName + " " + _LastName;
    }
};


int main()
{
    clsPerson person1; // Creating an object of clsPerson
    person1.SetFirstName("Abdurrezzak");
    person1.SetLastName("Ekidi");

    


    cout << "First Name: " << person1.GetFirstName() << endl;
    cout << "Last Name: " << person1.GetLastName() << endl;
    cout << "Full Name: " << person1.GetFullName() << endl;
	cout << "ID: " << person1.GetID() << endl;
    return 0;

}

