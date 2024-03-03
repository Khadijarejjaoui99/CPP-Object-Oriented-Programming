#include <iostream>
using namespace std;

class clsCalculator
{
private:
    float _Result = 0, _LastNumber = 0, _PrevResult;
    string _LastOperation = "";

    bool _isZero(float Number)
    {
        return (Number == 0);
    }

public:
    void Add(float Number)
    {
        _PrevResult = _Result;
        _Result += Number;
        _LastNumber = Number;
        _LastOperation = "Adding";
    }

    void Subtraction(float Number)
    {
        _PrevResult = _Result;
        _Result -= Number;
        _LastNumber = Number;
        _LastOperation = "Subtracting";
    }

    void Multiplication(float Number)
    {
        _PrevResult = _Result;
        _Result *= Number;
        _LastNumber = Number;
        _LastOperation = "Multiplying";
    }

    void Division(float Number)
    {
        if (_isZero(Number))
            Number = 1;

        _PrevResult = _Result;
        _Result /= Number;
        _LastNumber = Number;
        _LastOperation = "Dividing";
    }

    void Clear()
    {
        _PrevResult = _Result;
        _Result = 0;
        _LastNumber = 0;
        _LastOperation = "Clear";
    }

    void CancelLastOperation()
    {
        _Result = _PrevResult;
        _LastNumber = 0;
        _LastOperation = "Cancelling Last Operation";
    }

    void PrintResult()
    {
        cout << "\n Result After " << _LastOperation << " " << _LastNumber << " is: " << _Result << endl;
    }
};

int main()
{
    clsCalculator Calculator1;

    Calculator1.Clear();

    Calculator1.Add(10);
    Calculator1.PrintResult();

    Calculator1.Add(100);
    Calculator1.PrintResult();

    Calculator1.Subtraction(20);
    Calculator1.PrintResult();

    Calculator1.Division(0);
    Calculator1.PrintResult();

    Calculator1.Division(2);
    Calculator1.PrintResult();

    Calculator1.Multiplication(3);
    Calculator1.PrintResult();

    Calculator1.CancelLastOperation();
    Calculator1.PrintResult();

    Calculator1.Add(10);
    Calculator1.PrintResult();

    Calculator1.Clear();
    Calculator1.PrintResult();
    system("pause>0");
    return 0;
}