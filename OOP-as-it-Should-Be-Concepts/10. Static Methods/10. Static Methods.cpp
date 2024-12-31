#include <iostream>

using namespace std;

class Static
{
public:

    static int Func1()
    {
        return 20;
    }

    int Func2()
    {
        return 10;
    }
};

int main()
{
    // Can Call Static Methods From Class Directly Without Object
    cout << Static::Func1() << endl;

    //cout << Static::Func2() << endl;      // I Can't. It Should be an Object.

    Static s1;
    cout << s1.Func1() << endl;
    cout << s1.Func2() << endl;
}
