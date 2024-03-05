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

     // Upper First Letter of Each Word

     cout << "\n Upper First Letter of Each word For String1: "
          << String1.UpperFirstLetterOfEachWord();
     cout << "\n Upper First Letter of Each word For String2: "
          << String2.UpperFirstLetterOfEachWord();
     cout << "\n Upper First Letter of Each word: "
          << clsString::UpperFirstLetterOfEachWord("khadija rejjaoui") << endl;

     // Lower First Letter of Each Word

     cout << "\n Lower First Letter of Each word For String1: "
          << String1.LowerFirstLetterOfEachWord();
     cout << "\n Lower First Letter of Each word For String2: "
          << String2.LowerFirstLetterOfEachWord();
     cout << "\n Lower First Letter of Each word: "
          << clsString::LowerFirstLetterOfEachWord("Khadija Rejjaoui") << endl;

     // Upper All String

     cout << "\n Upper String1: "
          << String1.UpperAllString();
     cout << "\n Upper String2: "
          << String2.UpperAllString();
     cout << "\n Upper All String: "
          << clsString::UpperAllString("Khadija Rejjaoui") << endl;

     // Lower All String

     cout << "\n Lower String1: "
          << String1.LowerAllString();
     cout << "\n Lower String2: "
          << String2.LowerAllString();
     cout << "\n Lower All String: "
          << clsString::LowerAllString("Khadija Rejjaoui") << endl;

     // Invert All letters Case in a String

     cout << "\n Invert All letters Case in String1: "
          << String1.InvertAllStringLettersCase();
     cout << "\n Invert All letters Case in String2: "
          << String2.InvertAllStringLettersCase();
     cout << "\n Invert All letters Case: "
          << clsString::InvertAllStringLettersCase("Khadija Rejjaoui") << endl;

     system("pause>0");
     return 0;
}