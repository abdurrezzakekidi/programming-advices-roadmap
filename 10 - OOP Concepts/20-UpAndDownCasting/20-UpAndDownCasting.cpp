#include <iostream>

using namespace std;

class clsPerson
{
public:
	string FullName = "Abdurrezzak Ekidi";
};

class clsEmployee :public clsPerson
{
public:
	string Title = "Software Engineer";
};

int main()
{
	clsEmployee employee1;
	cout << employee1.FullName << endl;

	//Upcasting: 
	//clsPerson * person1 = &employee1; 
	//cout << person1->FullName << endl; 
	//cout << person1->Title << endl; // Error: 'class clsPerson' has no member named 'Title'

	//Downcasting:
	clsPerson person2;
	cout << person2.FullName << endl;
	//clsEmployee* employee2 = &person2;
   
}


