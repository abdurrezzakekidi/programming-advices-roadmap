#include <iostream>
using namespace std;

class clsA
{
private:
    //only accessable inside this class , neither derived  classes nor outside class.
    int _var1;

    void _Fun1()
    {
        cout << "Function 1";
    }

protected:
	// only accessable inside this class and derived  classes , but not outside class.
    int _var2;
    void _Fun2()
    {
        cout << "Function 2";
	}

public:
    // accessable everywhere
    int _var3;
    void _Fun3()
    {
        cout << "Function 3";
	}
};

class clsB : public clsA
{
public:
    void Func1()
    {
	clsA::_Fun2(); // Accessing protected member of base class
	cout << clsA::_var2;  // Accessing protected member of base class

    }
};


int main()
{
    clsB B;
    
    
}


