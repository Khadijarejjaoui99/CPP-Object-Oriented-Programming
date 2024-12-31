#include <iostream>

using namespace std;

class Person
{
public:
    string first_name;
    string last_name;

    string name()
    {
        return first_name + " " + last_name;
    }
};

int main()
{
    Person person1;

    person1.first_name = "Khadija";
    person1.last_name = "Rejjaoui";

    cout << person1.name() << endl;
}
