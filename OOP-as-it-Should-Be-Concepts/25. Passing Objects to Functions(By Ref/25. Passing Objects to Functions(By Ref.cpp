#include <iostream>

using namespace std;

class ClsA
{
public:

    int x;

    void Print()
    {
        cout << "The value of x=" << x << endl;
    }
};

// object sent by value, any updated will not b reflected on the original object
void Func1(ClsA A)
{
    A.x = 100;
}

// object sent by reference, any updated will be reflected on the original object
void Func2(ClsA& A)
{
    A.x = 200;
}


int main()
{
    ClsA A;

    A.x = 50;
    cout << "\nA.x before calling function1: \n";
    A.Print();

    Func1(A);
    cout << "\nA.x after calling function1 by val: \n";
    A.Print();

    Func2(A);
    cout << "\nA.x after calling function2 by ref: \n";
    A.Print();
}
