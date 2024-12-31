#include <iostream>

using namespace std;

class Address
{
private:

    string _addressLine1;
    string _addressLine2;
    string _poBox;
    string _zipCode;

public:

    Address(string addressLine1, string addressLine2, string poBox, string zipCode)
    {
        _addressLine1 = addressLine1;
        _addressLine2 = addressLine2;
        _poBox = poBox;
        _zipCode = zipCode;
    }

    Address(Address& oldAddress)
    {
        _addressLine1 = oldAddress.AddressLine1();
        _addressLine2 = oldAddress.AddressLine2();
        _poBox = oldAddress.PoBox();
        _zipCode = oldAddress.ZipCode();
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

    void SetPoBox(string poBox)
    {
        _poBox = poBox;
    }

    string PoBox()
    {
        return _poBox;
    }

    void SetZipCode(string zipCode)
    {
        _zipCode = zipCode;
    }

    string ZipCode()
    {
        return _zipCode;
    }

    void Print()
    {
        cout << "\tAddress Data\n";
        cout << "=============================\n";
        cout << "Address Line1: " << _addressLine1 << endl;
        cout << "Address Line2: " << _addressLine2 << endl;
        cout << "POBOX: " << _poBox << endl;
        cout << "ZipCode: " << _zipCode << endl;
        cout << "=============================\n";
    }
};

int main()
{
    Address address("Tahway", "Aumo", "1111", "35637");
    address.Print();

    Address address2 = address;
    address2.Print();
}