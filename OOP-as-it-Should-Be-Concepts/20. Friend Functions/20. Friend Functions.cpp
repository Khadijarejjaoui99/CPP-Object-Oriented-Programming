#include <iostream>

using namespace std;

class ClsA
{
private:

    int _var1;
    int _var2;

public:

    int var3;

    ClsA()
    {
        _var1 = 10;
        _var2 = 20;
        var3 = 30;
    }

    friend int Sum(ClsA A);     // Friend Function
};

int Sum(ClsA A)
{
    return A._var1 + A._var2 + A.var3;
}

int main()
{
    ClsA A;

    cout << Sum(A);
}
