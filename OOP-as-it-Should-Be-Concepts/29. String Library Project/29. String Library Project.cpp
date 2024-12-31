#include <iostream>
#include "ClsString.h"

using namespace std;

int main()
{
    ClsString string1("Khadija Rejjaoui");

    cout << string1.CountVowels() << endl;
    cout << ClsString::CountVowels("Welcome") << endl;
}
