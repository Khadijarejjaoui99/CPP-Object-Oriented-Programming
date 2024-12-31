#pragma once

#include <iostream>
#include "Person.h"

using namespace std;

class Employee : public Person
{
private:

    string _title;
    string _department;
    float _salary;

public:

    Employee(int ID, string firstName, string lastName, string email, string phone, string title, string department, float salary)
        : Person(ID, firstName, lastName, email, phone)
    {
        _title = title;
        _department = department;
        _salary = salary;
    }

    void SetTitle(string title)
    {
        _title = title;
    }

    string Title()
    {
        return _title;
    }

    void SetDepartment(string department)
    {
        _department = department;
    }

    string Department()
    {
        return _department;
    }

    void SetSalary(float salary)
    {
        _salary = salary;
    }

    float Salary()
    {
        return _salary;
    }

    void PrintInfo()
    {
        cout << "\n======================================\n";
        cout << "\tInfo\n";
        cout << "======================================\n";

        cout << "ID        : " << ID() << endl;
        cout << "First Name: " << FirstName() << endl;
        cout << "Last Name : " << LastName() << endl;
        cout << "Full Name : " << FullName() << endl;
        cout << "Email     : " << Email() << endl;
        cout << "Phone     : " << Phone() << endl;
        cout << "Salary    : " << _salary << endl;
        cout << "Department: " << _department << endl;
        cout << "Title     : " << _title << endl;
        cout << "======================================\n\n";
    }
};

