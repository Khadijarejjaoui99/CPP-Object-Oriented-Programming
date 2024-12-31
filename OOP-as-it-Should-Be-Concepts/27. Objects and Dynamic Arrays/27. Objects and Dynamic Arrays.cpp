#include <iostream>

using namespace std;

class ClsA
{
public:

    int x;

    // Dummy Constructor
    ClsA()
    {

    }

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
    short numberOfObjects = 5;

    ClsA* arrA = new ClsA[numberOfObjects];


    for (short i = 0; i < numberOfObjects; i++)
    {
        arrA[i] = ClsA(i);
    }

    for (short i = 0; i < numberOfObjects; i++)
    {
        arrA[i].Print();
    }

    delete[] arrA;
}

