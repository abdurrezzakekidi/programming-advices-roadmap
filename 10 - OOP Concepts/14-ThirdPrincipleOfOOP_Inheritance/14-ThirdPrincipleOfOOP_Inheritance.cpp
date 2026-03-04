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

	clsPerson() 
	{
	}
	// default constructor
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
		clsPerson::print(); // Call the base class print function to display common information
		// Display employee-specific information
		cout << "Title: " << _title << endl;
		cout << "Department: " << _department << endl;
		cout << "Salary: $" << _salary << endl;
	}

};

int main()
{
	/*
	clsPerson person1(82, "Abdurrezzak", "Ekidi",
		"my@gmail.com", "0534125755");

	person1.print();

	person1.SendEmail("Hello", "How are you?");
	person1.SendSMS("How are you?");
	*/
	clsEmployee employee1;
	employee1.setFirstName("Abdurrezzak");
	employee1.setLastName("Ekidi");
	employee1.setEmail("aasd@gmail.com");
	employee1.setPhoneNumber("05555555");
	employee1.setSalary(5000);
	employee1.setDepartment("IT");
	employee1.setTitle("Software Engineer");
	employee1.print();
	employee1.SendEmail("Hi", "How are you?");

	system("pause>0");
	return 0;


}


