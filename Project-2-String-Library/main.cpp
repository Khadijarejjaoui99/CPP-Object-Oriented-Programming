#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{
     // Example 1:

     clsString String1("Hello world!");
     clsString String2;

     String2.SetValue("Programming is Fun");

     cout << "\n String1: " << String1.GetValue();
     cout << "\n String2: " << String2.GetValue() << endl;

     //
     system("pause>0");
     return 0;
}