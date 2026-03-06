#include <iostream>
#include "clsInputValidate.h"

using namespace std;

int main()

{
    cout << clsInputValidate::IsNumberBetween(9, 1, 10) << endl;
    cout << clsInputValidate::IsNumberBetween(5.5, 1.3, 10.8) << endl;

    cout << clsInputValidate::IsDateBetween(clsDate(),
        clsDate(8, 12, 2022),
        clsDate(9, 3, 2026)) << endl;
	cout << "----------------------------------\n";

    cout << clsInputValidate::IsDateBetween(clsDate(),
        clsDate(31, 12, 2022),
        clsDate(18, 5, 2026)) << endl;
    cout << "----------------------------------\n";

    cout << "\nPlease Enter a Number:\n";
    int x = clsInputValidate::ReadIntNumber("Invalid Number, Enter again:\n");
    cout << "x=" << x;
    cout << "\n----------------------------------\n";

    cout << "\nPlease Enter a Number between 1 and 5:\n";
    int y = clsInputValidate::ReadIntNumberBetween(1, 5, "Number is not within range, enter again:\n");
    cout << "y=" << y;
    cout << "\n----------------------------------\n";
    cout << "\nPlease Enter a Double Number:\n";
    double a = clsInputValidate::ReadDblNumber("Invalid Number, Enter again:\n");
    cout << "a=" << a;
    cout << "\n----------------------------------\n";
    cout << "\nPlease Enter a Double Number between 1 and 5:\n";
    double b = clsInputValidate::ReadDblNumberBetween(1, 5, "Number is not within range, enter again:\n");
    cout << "b=" << b;
    cout << "\n----------------------------------\n";
    cout << endl << clsInputValidate::IsValideDate(clsDate(28, 2, 2026)) << endl;

    system("pause>0");

    return 0;
}