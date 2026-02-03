#include <iostream>

using namespace std;

class clsAddress
{
	private:
	string _AddressLine1;
	string _AddressLine2;
	string _POBox;
	string _ZipCode;

public:

	// parametrized constructor, overrides default constructor.
	clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode)
	{
		// set parameters data to private attributes
		_AddressLine1 = AddressLine1;
		_AddressLine2 = AddressLine2;
		_POBox = POBox;
		_ZipCode = ZipCode;
		

	}

	void SetAddressLine1(string AddressLine1)
	{
		_AddressLine1 = AddressLine1;
	}

	string GetAddressLine1()
	{
		return _AddressLine1;
	}


	void SetAddressLine2(string AddressLine2)
	{
			
		_AddressLine2 = AddressLine2;
	}

	string GetAddressLine2()
	{
		return _AddressLine2;
	}

	void SetPOBox(string POBox)
	{
		_POBox = POBox;
	}

	string GetPOBox()
	{
		return _POBox;
	}


	void SetZipCode(string ZipCode)
	{
		_ZipCode = ZipCode;
	}

	string GetZipCode()
	{
		return _ZipCode;
	}

	void Print()
	{
		cout << "\nAddress Details:\n";
		cout << "________________________________";
		cout << "\nAddress Line 1: " << _AddressLine1 << endl;
		cout << "Address Line 2: " << _AddressLine2 << endl;
		cout << "PO Box: " << _POBox << endl;
		cout << "Zip Code: " << _ZipCode << endl;
		cout << "________________________________\n";
	}


};

		

int main()
{
	clsAddress Address1(
		"Sefik Tugay Street",
		"B 382 ",
		"441250",
		"44100");

	Address1.Print();

	//clsAddress Address2;
	
	return 0;

   
}


