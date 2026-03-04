#include <iostream>

using namespace std;

//Abstract class / interface / Contract.
class clsMobile
{
	virtual void Dial(string PhoneNumber) = 0;// pure virtual function, makes this class an abstract

	virtual void SendSMS(string PhoneNumber,string Text) = 0;
	virtual void TakePicture() = 0;
};

class clsIPhone : public clsMobile
{
public:

	void Dial(string PhoneNumber)
	{

	};
	void SendSMS(string PhoneNumber, string Text)
	{

	};

	void TakePicture()
	{

	};

	// Derived class can have additional methods
	void MyOwnMethod()
	{

	};

};

class clsSamsungNote20 : public clsMobile
{

public:

	void Dial(string PhoneNumber)
	{

	};

	void SendSMS(string PhoneNumber, string Text)
	{

	};

	void TakePicture()
	{

	};

};
  


int main()
{
	// clsMobile mobile; error->Can't create object from abstract class. Becuase it doesn't has implementation.
	clsIPhone iPhone1;

	iPhone1.Dial("123456789");

	clsSamsungNote20 note20;


	system("pause>0");
	return 0;
    
}


