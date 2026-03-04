#include <iostream>

using namespace std;

class clsEmployee
{
    private:

    int _id;
    string _FirstName;
    string _LastName;
    string _Email;
	string _Title;
    string _PhoneNumber;
	double _Salary;
	string _Department;

    public:
    clsEmployee(int id, string firstName, string lastName, string email, string title, string phoneNumber, double salary, string department)
    {
        _id = id;
        _FirstName = firstName;
        _LastName = lastName;
        _Email = email;
        _Title = title;
        _PhoneNumber = phoneNumber;
        _Salary = salary;
        _Department = department;
	}
	//read only property
    int getId()
    {
        return _id;
	}

    //get
    string getFirstName()
    {
        return _FirstName;
    }
    //set
    void setFirstName(string firstName)
    {
         _FirstName = firstName;
    }
    string getLastName()
    {
        return _LastName;
    }
    void setLastName(string lastName)
    {
        _LastName = lastName;
    }
    string getEmail()
    {
        return _Email;
    }
    void setEmail(string email)
    {
        _Email = email;
	}

    string getTitle()
    {
        return _Title;
    }

    void setTitle(string title)
    {
        _Title = title;
    }

    string getPhoneNumber()
    {
        return _PhoneNumber;
    }

    void setPhoneNumber(string phoneNumber)
    {
        _PhoneNumber = phoneNumber;
	}

    double getSalary()
    {
        return _Salary;
    }

    void setSalary(double salary)
    {
        _Salary = salary;
    }

    string getDepartment()
    {
        return _Department;
    }

    void setDepartment(string department)
    {
        _Department = department;
	}
	//get full name
    string getFullName()
    {
        return _FirstName + " " + _LastName;
    }


    void print()
    {
		cout << "\nInfo:" << endl;
		cout << "-----------------------------" << endl;
        cout << "ID: " << _id << endl;
        cout << "Name: " << getFullName() << endl;
        cout << "Email: " << _Email << endl;
        cout << "Title: " << _Title << endl;
        cout << "Phone Number: " << _PhoneNumber << endl;
        cout << "Department: " << _Department << endl;
        cout << "Salary: $" << _Salary << endl;
		cout << "-----------------------------" << endl;
	}

    void SendEmail(string subject, string body)
    {
        cout << "The following message sent successfully to email:" << _Email << endl;
        cout << "Subject: " << subject << endl;
        cout << "Body: " << body << endl;
    }
    void  SendSMS(string message)
    {
        cout << "MS has been sent successfully to phone: " << _PhoneNumber << endl;
        cout << "Message: " << message << endl;
	}


};

int main()
{
    clsEmployee employee1(15, "Abdurrezzak", "Ekidi", "ekidi@gmail.com",
        "Software Engineer", "055555555555", 4250.50, "Software Development");

	employee1.print();

    employee1.SendEmail("Hi", "How are you?");
    employee1.SendSMS("How are you?");


	system("pause>0");
	return 0;

    
}


