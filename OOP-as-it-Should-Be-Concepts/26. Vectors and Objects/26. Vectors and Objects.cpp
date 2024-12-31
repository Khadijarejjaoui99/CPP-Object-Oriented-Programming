#include <iostream>
#include <vector>

using namespace std;

class ClsA
{
public:

    int x;

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
    vector <ClsA> v1;

    short numberOfObjects = 5;

    for (short i = 0; i < numberOfObjects; i++)
    {
        v1.push_back(ClsA(i));
    }

    for (short i = 0; i < numberOfObjects; i++)
    {
        v1[i].Print();
    }
}

