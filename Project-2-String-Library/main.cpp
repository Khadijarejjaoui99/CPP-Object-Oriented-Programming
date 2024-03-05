#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{
     // Example 1:
     cout << "\n Example 1:\n";

     clsString String1("Hello world!");
     clsString String2;

     String2.SetValue("Programming is Fun");

     cout << "\n String1: " << String1.GetValue();
     cout << "\n String2: " << String2.GetValue() << endl;

     // Example 2:
     cout << "\n Example 2:\n";

     cout << "\n Capital Letters Count Of String1: " << String1.CountCapitalLetters();
     cout << "\n Capital Letters Count Of String2: " << String2.CountCapitalLetters();
     cout << "\n Capital Letters Count Of \'Hi, How are yOU Today\': " << clsString::CountCapitalLetters("Hi, How are yOU Today") << endl;

     // Example 3:
     cout << "\n Example 3:\n";

     cout << "\n Capital Letters Count Of \'Hi, How are yOU Today\': " << clsString::CountLetters("Hi, How are yOU Today", clsString::CapitalLetters);
     cout << "\n Small Letters Count Of \'Hi, How are yOU Today\': " << clsString::CountLetters("Hi, How are yOU Today", clsString::SmallLetters);
     cout << "\n All Letters Count Of \'Hi, How are yOU Today\': " << clsString::CountLetters("Hi, How are yOU Today", clsString::All) << endl;

     system("pause>0");
     return 0;
}