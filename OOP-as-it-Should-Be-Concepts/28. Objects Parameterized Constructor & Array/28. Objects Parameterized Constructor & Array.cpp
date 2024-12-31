#include <iostream>

using namespace std;

class ClsA
{
public:

    int x;

    // Parameterized Constructor
    ClsA(int number)
    {
        x = number;
    }

    void Print()
    {
        cout << "The value of x = " << x << endl;
    }
};


int main()
{
    // Initializing 3 array Objects with function calls of
    // parameterized constructor as elements of that array
    ClsA arrA[3] = { ClsA(10), ClsA(20), ClsA(30) };

    for (short i = 0; i < 3; i++)
    {
        arrA[i].Print();
    }
}