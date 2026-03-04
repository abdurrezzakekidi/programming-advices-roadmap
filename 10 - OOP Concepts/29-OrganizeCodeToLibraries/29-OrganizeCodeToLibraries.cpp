#include <iostream>
#include "clsPerson.h"
#include "clsEmployee.h"

using namespace std;

int main()

{

    clsEmployee Employee1(10, "Abdurrezzak", "Ekidi", "A@a.com", "8200982", "Software Engineer", "IT", 5000);

    Employee1.Print();

    system("pause>0");
    return 0;
}