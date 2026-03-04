#include <iostream>

using namespace std;

class clsPerson
{
    struct stAddress
    {
        string AddressLine1;
        string AddressLine2;
        string City;
        string Country;
    };

public:
    string FullName;
    stAddress Address;

    clsPerson()
    {
        FullName = "Abdurrezzak Ekidi";
        Address.AddressLine1 = "Building 25";
        Address.AddressLine2 = "Fatih Sultan Mehmet Street";
        Address.City = "Istanbul";
        Address.Country = "Turkey";
    }

    void PrintAddress()
    {
        cout << "\nAddress:\n";
        cout << Address.AddressLine1 << endl;
        cout << Address.AddressLine2 << endl;
        cout << Address.City << endl;
        cout << Address.Country << endl;
        
    }
};

int main()
{
    clsPerson Person1;

    Person1.PrintAddress();
    Person1.Address.AddressLine1;
    
}


