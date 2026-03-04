#include <iostream>

using namespace std;

class clsPerson // Enclusure class
{
    //private
    string _FullName;


    class clsAddress //inner class
    {
    private:
        string _AddressLine1;
        string _AddressLine2;
        string _City;
        string _Country;

    public:

        clsAddress(string AddressLine1,
            string AddressLine2, string City, string Country)
        {
            _AddressLine1 = AddressLine1;
            _AddressLine2 = AddressLine2;
            _City = City;
            _Country = Country;
        }

        void setAddressLine1(string AddressLine1)
        {
            _AddressLine1 = AddressLine1;
        }

        string getAddressLine1()
        {
            return _AddressLine1;
        }

        void setAddressLine2(string AddressLine2)
        {
            _AddressLine2 = AddressLine2;
        }

        string getAddressLine2()
        {
            return _AddressLine2;
        }

        void setCity(string City)
        {
            _City = City;
        }

        string getCity()
        {
            return _City;
        }

        void setCountry(string Country)
        {
            _Country = Country;
        }

        string getCountry()
        {
            return _Country;
        }

        void Print()
        {
            cout << "\nAddress:\n";
            cout << _AddressLine1 << endl;
            cout << _AddressLine2 << endl;
            cout << _City << endl;
            cout << _Country << endl;
        }
    };

public:

    void setFullName(string FullName)
    {
        _FullName = FullName;
    }

    string getFullName()
    {
        return _FullName;
    }

    clsAddress Address = clsAddress("", "", "", "");

    clsPerson(string FullName, string AddressLine1,
        string AddressLine2, string City, string Country)
    {
        _FullName = FullName;
        //initiate address class by it's constructor
        Address = clsAddress(AddressLine1, AddressLine2, City, Country);
    }

    void Print()
    {
        
        cout << "\Info:\n";
        cout << _FullName << endl;
        cout << Address.getAddressLine1() <<endl;
        cout << Address.getAddressLine2() << endl;
        cout << Address.getCity() << endl;
        cout << Address.getCountry() << endl;
    }
};

int main()
{
    clsPerson Person1("Abdurrezzak Ekidi", "Building 25",
        "Fatih Sultan Mehmet Street", "Istanbul", "Turkey");
    //Person1.Address.Print();
    Person1.Print();
    cout << "\n____________________________________________\n";
    Person1.Address.setCity("Malatya");
    Person1.setFullName("A.rezzak EKidi");
    Person1.Print();


}


