#include <iostream>

using namespace std;

// Abstract Class / Interface / Contract
class Mobile
{
    // Pure Virtual Functions
    virtual void Dial(string phoneNumber) = 0;
    virtual void SendSMS(string phoneNumber, string text) = 0;
    virtual void TakePicture() = 0;
};

class IPhone : public Mobile
{
public: 

    void Dial(string phoneNumber)
    {
        cout << "Dial.\n";
    }
    void SendSMS(string phoneNumber, string text)
    {
        cout << "SMS.\n";
    }
    void TakePicture()
    {
        cout << "Picture.\n";
    }

    // I can implement any function here
};

int main()
{
    IPhone iPhone;

    iPhone.Dial("0152232312");
    iPhone.SendSMS("0152232312", "Hi");
}
