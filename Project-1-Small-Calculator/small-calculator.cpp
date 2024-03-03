#include <iostream>
using namespace std;

class clsCalculator
{
private:
    float _Result = 0, _LastNumber = 0;
    string _LastOperation = "";

public:
    void Add(float Number)
    {
        _Result += Number;
        _LastNumber = Number;
        _LastOperation = "Adding";
    }

    void Subtraction(float Number)
    {
        _Result -= Number;
        _LastNumber = Number;
        _LastOperation = "Subtracting";
    }

    void Multiplication(float Number)
    {
        _Result *= Number;
        _LastNumber = Number;
        _LastOperation = "Multiplying";
    }

    void PrintResult()
    {
        cout << "\n Result After " << _LastOperation << " " << _LastNumber << " is: " << _Result << endl;
    }
};

int main()
{
    clsCalculator Calculator1;

    Calculator1.Add(10);
    Calculator1.PrintResult();

    Calculator1.Add(100);
    Calculator1.PrintResult();

    Calculator1.Subtraction(20);
    Calculator1.PrintResult();

    Calculator1.Multiplication(3);
    Calculator1.PrintResult();

    system("pause>0");
    return 0;
}