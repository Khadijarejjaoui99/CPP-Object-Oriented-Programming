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

    friend class ClsB;  // Friend Class
};

class ClsB
{
public: 

    void Display(ClsA a1)
    {
        cout << "\nThe Value of Var1 = " << a1._var1 << endl;
        cout << "\nThe Value of Var2 = " << a1._var2 << endl;
        cout << "\nThe Value of Var3 = " << a1.var3 << endl;
    }
};

int main()
{
    ClsA a;
    ClsB b;

    b.Display(a);
}