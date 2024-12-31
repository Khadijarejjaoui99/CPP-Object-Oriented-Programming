#include <iostream>

using namespace std;

class ClsPerson
{
private:
    string _fullName;

    class ClsAddress
    {
    private:
        string _addressLine1;
        string _addressLine2;
        string _city;
        string _country;

    public:
        ClsAddress(string addressLine1, string addressLine2, string city, string country)
        {
            _addressLine1 = addressLine1;
            _addressLine2 = addressLine2;
            _city = city;
            _country = country;
        }

        void SetAddressLine1(string addressLine1)
        {
            _addressLine1 = addressLine1;
        }

        string AddressLine1()
        {
            return _addressLine1;
        }

        void SetAddressLine2(string addressLine2)
        {
            _addressLine2 = addressLine2;
        }

        string AddressLine2()
        {
            return _addressLine2;
        }

        void SetCity(string city)
        {
            _city = city;
        }

        string City()
        {
            return _city;
        }

        void SetCountry(string country)
        {
            _country = country;
        }

        string Country()
        {
            return _country;
        }

        void Print()
        {
            cout << "\n===============================\n";
            cout << "\tAddress\n";
            cout << "===============================\n";
            cout << _addressLine1 << endl;
            cout << _addressLine2 << endl;
            cout << _city << endl;
            cout << _country << endl;
            cout << "===============================\n";
        }
    };

public:
    ClsAddress address = ClsAddress("", "", "", "");

    ClsPerson(string addressLine1, string addressLine2, string city, string country, string fullName)
    {
        _fullName = fullName;

        // initiate address class by it's constructor
        address = ClsAddress(addressLine1, addressLine2, city, country);
    }

    void SetFullName(string fullName)
    {
        _fullName = fullName;
    }

    string FullName()
    {
        return _fullName;
    }
};

int main()
{
    ClsPerson person("Tahway", "Aumo", "Mansoura", "Egypt", "Khadija Rejjaoui");

    person.address.Print();
}