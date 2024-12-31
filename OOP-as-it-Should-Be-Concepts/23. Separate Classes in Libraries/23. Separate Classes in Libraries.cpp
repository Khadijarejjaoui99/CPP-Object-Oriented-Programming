#include <iostream>
#include "Person.h"
#include "Employee.h"

using namespace std;

int main()
{
    Employee employee(1, "Khadija", "Rejjaoui", "KhadijaRejjaoui11@gmail.com", "0251728931", "Engineer", "Software", 10000);

    employee.PrintInfo();
}