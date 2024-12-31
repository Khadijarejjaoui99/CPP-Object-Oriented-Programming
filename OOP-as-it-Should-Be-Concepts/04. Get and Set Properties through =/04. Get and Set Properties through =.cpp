#include <iostream>

using namespace std;

class Person
{
private:
    string _first_name;

public:
    // Properity Set
    void set_first_name(string first_name)
    {
        _first_name = first_name;
    }

    // Properity Get
    string get_first_name()
    {
        return _first_name;
    }

    __declspec(property(get = get_first_name, put = set_first_name)) string FirstName;
};

int main()
{
    Person Person1;

    Person1.set_first_name("Khadija");
    cout << "First Name: " << Person1.get_first_name() << endl;

    // Get and Set Property using =
    Person1.FirstName = "Rejjaoui";
    cout << Person1.FirstName << endl;
}
