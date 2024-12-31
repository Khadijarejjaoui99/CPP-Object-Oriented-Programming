#include <iostream>

using namespace std;

class ClsEmployee
{
public:
    int ID;
    string Name;
    int Salary;

    ClsEmployee(int ID, string Name, int Salary)
    {
        this->ID = ID;
        this->Name = Name;
        this->Salary = Salary;
    }

    void Print()
    {
        cout << ID << " " << Name << " " << Salary << endl;
        // cout << this->ID << "  " << this->Name << "  " << this->Salary << endl;   this is the default
    }

    void Func1(ClsEmployee Employee)
    {
        Employee.Print();
    }

    void Func2()
    {
        Func1(*this);
    }
};

int main()
{
    ClsEmployee employee(1, "Khadija", 10000);

    employee.Print();
    employee.Func2();
}
