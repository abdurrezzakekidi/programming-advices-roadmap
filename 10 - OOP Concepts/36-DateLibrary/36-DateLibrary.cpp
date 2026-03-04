#include <iostream>
#include "clsDate.h"

using namespace std;

int main()
{
    clsDate date1;
    date1.Print();

    clsDate date2("31/12/2022");
    date2.Print();

    clsDate date3(4, 10, 2002);
    date3.Print();

    clsDate date4(250, 2022);
    date4.Print();
    cout << "\n________________________________\n";

    cout << date2.IsLastDayInMonth() << endl;
    cout << date2.IsLastMonthInYear() << endl;

    date2.IncreaseDateByOneWeek();
    date2.Print();

    cout << date1.IsDateBeforeDate2(date2) << endl;

    cout << date1.IsBusinessDay() << endl;

    cout << date1.IsDateAfterDate2(date2) << endl;

    date2.AddDays(10);
    date2.Print();

    clsDate date5(19, 9, 2008);

    cout << date2.GetDifferenceInDays(date5) << endl;

    short AgeInDays = clsDate::CalculateMyAgeInDays(date5);

    cout << "My age in days is: " << AgeInDays << endl;

    return 0;
}