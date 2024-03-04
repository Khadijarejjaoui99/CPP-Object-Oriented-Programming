#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{
    // Using Default Constructor
    clsString String1;

    // Using Parametrized Constructor
    clsString String2("Hello world!");

    // Setting Value of String1
    String1.SetValue("Programming is fun");

    // Getting Value of String1 & String2
    cout << "\n String1: " << String1.GetValue();
    cout << "\n String2: " << String2.GetValue() << endl;

    // First Letter Of Each Word In String
    String1.PrintFirstLetterOfEachWord();
    String2.PrintFirstLetterOfEachWord();
    clsString::PrintFirstLetterOfEachWord("khadija Rejjaoui");

    system("pause>0");
    return 0;
}