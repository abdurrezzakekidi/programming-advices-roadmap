#include <iostream>

using namespace std;

class clsPerson // Enclusure class
{
    class clsAddress //inner class
    {
    public:
        string AddressLine1;
        string AddressLine2;
        string City;
        string Country;
    


    void Print()
    {
        cout << "\nAddress:\n";
        cout << AddressLine1 << endl;
        cout << AddressLine2 << endl;
        cout << City << endl;
        cout << Country << endl;

    }
};  

public:
    string FullName;
    clsAddress Address;

    clsPerson()
    {
        FullName = "Abdurrezzak Ekidi";
        Address.AddressLine1 = "Building 25";
        Address.AddressLine2 = "Fatih Sultan Mehmet Street";
        Address.City = "Istanbul";
        Address.Country = "Turkey";
    }
};

int main()
{
    clsPerson Person1;
    Person1.Address.AddressLine1;
    Person1.Address.Print();


}


