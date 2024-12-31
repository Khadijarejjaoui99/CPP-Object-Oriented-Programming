#include <iostream>

using namespace std;

class Static
{
public:

    int _val;
    static int _counter;

    Static()
    {
        _counter++;
    }

    void Print()
    {
        cout << "Val = " << _val << endl;
        cout << "Counter = " << _counter << endl;
    }
};

int Static::_counter = 0;   // Static Variable Initialization Outside The Class

int main()
{
    Static s1, s2, s3;

    s1._val = 10;
    s2._val = 20;
    s3._val = 30;

    s1.Print();
    s2.Print();
    s3.Print();

    cout << "\nAfter Changing The Static Member Counter: \n";
    s1._counter = 500;

    s1.Print();
    s2.Print();
    s3.Print();
}
