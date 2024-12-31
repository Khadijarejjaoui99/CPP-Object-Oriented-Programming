#include <iostream>

using namespace std;

class Calculator
{
private:

    enum _operation {_clear , _add, _subtract, _multiply, _divide};
    float _number = 0;
    float _result = 0;
    _operation _op = _operation::_add;

public:

    float Add(float number)
    {
        _number = number;
        _result += _number;
        _op = _operation::_add;

        return _result;
    }

    float Subtract(float number)
    {
        _number = number;
        _result -= _number;
        _op = _operation::_subtract;

        return _result;
    }

    float Multiply(float number)
    {
        _number = number;
        _result *= _number;
        _op = _operation::_multiply;

        return _result;
    }

    float Divide(float number)
    {
        _op = _operation::_divide;

        if (number == 0)
        {
            _number = 1;
            _result /= _number;

            return _result;
        }

        _number = number;
        _result /= _number;

        return _result;
    }

    void Clear()
    {
        _number = 0;
        _result = 0;
        _op = _operation::_clear;
    }

    void PrintResult()
    {
        switch (_op)
        {
            case _operation::_add:
                cout << "Result After Adding " << _number << " is: " << _result << endl;
                break;
            case _operation::_subtract:
                cout << "Result After Subtracting " << _number << " is: " << _result << endl;
                break;
            case _operation::_multiply:
                cout << "Result After Multiplying " << _number << " is: " << _result << endl;
                break;
            case _operation::_divide:
                cout << "Result After Dividing " << _number << " is: " << _result << endl;
                break;
            case _operation::_clear:
                cout << "Result After Clear " << _number << " is: " << _result << endl;
                break;
        }
    }
};

int main()
{
    Calculator calculator;

    calculator.Clear();
    calculator.PrintResult();

    calculator.Add(10);
    calculator.PrintResult();

    calculator.Add(100);
    calculator.PrintResult();

    calculator.Subtract(20);
    calculator.PrintResult();

    calculator.Divide(0);
    calculator.PrintResult();

    calculator.Divide(2);
    calculator.PrintResult();

    calculator.Multiply(3);
    calculator.PrintResult();

    calculator.Clear();
    calculator.PrintResult();
}

