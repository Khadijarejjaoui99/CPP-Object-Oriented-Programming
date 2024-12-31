#include <iostream>

using namespace std;

class ClsPerson
{
private:
    class ClsAddress
    {
    public:
        string addressLine1;
        string addressLine2;
        string city;
        string country;

        void Print()
        {
            cout << "\n===============================\n";
            cout << "\tAddress\n";
            cout << "===============================\n";
            cout << addressLine1 << endl;
            cout << addressLine2 << endl;
            cout << city << endl;
            cout << country << endl;
            cout << "===============================\n";
        }
    };

public:
    string fullName;
    ClsAddress address;

    ClsPerson()
    {
        fullName = "Khadija Rejjaoui";
        address.addressLine1 = "Tahway";
        address.addressLine2 = "Aumo";
        address.city = "Mansoura";
        address.country = "Egypt";
    }
};

int main()
{
    ClsPerson person;

    person.address.Print();
}
