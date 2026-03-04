#include <iostream>

using namespace std;

class clsPerson
{
private:
	int _id;
	string _firstName;
	string _lastName;
	string _email;
	string _phoneNumber;

public:


	clsPerson(int id, string firstName, string lastName, string email, string phoneNumber)
	{
		_id = id;
		_firstName = firstName;
		_lastName = lastName;
		_email = email;
		_phoneNumber = phoneNumber;
	}


	//read only property
	int getId()
	{
		return _id;
	}
	//get
	string getFirstName()
	{
		return _firstName;
	}

	//set
	void setFirstName(string firstName)
	{
		_firstName = firstName;
	}

	string getLastName()
	{
		return _lastName;
	}

	void setLastName(string lastName)
	{
		_lastName = lastName;
	}

	string getEmail()
	{
		return _email;
	}

	void setEmail(string email)
	{
		_email = email;
	}

	string getPhoneNumber()
	{
		return _phoneNumber;
	}

	void setPhoneNumber(string phoneNumber)
	{
		_phoneNumber = phoneNumber;
	}

	string getFullName()
	{
		return _firstName + " " + _lastName;
	}

	void print()
	{
		cout << "\nInfo:";
		cout << "\n--------------------------------";
		cout << "\nID: " << _id;
		cout << "\nFirst Name: " << _firstName;
		cout << "\nLast Name: " << _lastName;
		cout << "\nEmail: " << _email;
		cout << "\nPhone Number: " << _phoneNumber;
		cout << "\n--------------------------------\n";
	}

	void SendEmail(string Subject, string Body)
	{
		cout << "\n The following message sent successfully to email:" << _email;
		cout << "\nSubject: " << Subject;
		cout << "\nBody: " << Body;

	}

	void SendSMS(string Message)
	{
		cout << "\n The following SMS sent successfully to phone number:" << _phoneNumber;
		cout << "\nMessage: " << Message;
	}
};

class clsEmployee : public clsPerson
{
private:
	string _title;
	string _department;
	double _salary;

public:
	clsEmployee(int Id, string FirstName, string LastName, string Email, string Phone, string Title, string Department, double Salary)
		: clsPerson(Id, FirstName, LastName, Email, Phone) // Members intializer list 
		//: clsPersonn(params) -> sends the specific params to be set like the superclass without writing code again
	{
		_title = Title;
		_department = Department;
		_salary = Salary;

	}


	string getTitle()
	{
		return _title;
	}

	void setTitle(string title)
	{
		_title = title;
	}

	string getDepartment()
	{
		return _department;
	}

	void setDepartment(string department)
	{
		_department = department;
	}

	double getSalary()
	{
		return _salary;
	}

	void setSalary(double salary)
	{
		_salary = salary;
	}

	void print()
	{
		//clsPerson::print(); // Call the base class print function to display common information
		// Display employee-specific information
		cout << "\nInfo:";
		cout << "\n--------------------------------";
		cout << "\nID           : " << getId();  // Accessing the base class member using the getter function becuse it's private in the base class (_id)
		cout << "\nFirst Name   : " << getFirstName();
		cout << "\nLast Name    : " << getLastName();
		cout << "\nEmail        : " << getEmail();
		cout << "\nPhone Number : " << getPhoneNumber();


		cout << "\nTitle        : " << _title ;
		cout << "\nDepartment   : " << _department << endl;
		cout << "Salary       : $" << _salary ;
		cout << "\n--------------------------------\n";
	}

};

int main()
{
	
	clsEmployee employee1(10, "Abdurrezzak", "Ekidi", "a@gmail.com", "44654646", "Software Engineer", "IT", 7254.00);

	employee1.print();


	system("pause>0");
	return 0;


}


