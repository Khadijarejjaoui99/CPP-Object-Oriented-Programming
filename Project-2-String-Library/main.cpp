#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{
     // Example 1:
     cout << "\n Example 1:\n";

     clsString String1("Hello worLd!");
     clsString String2;

     String2.SetValue("Programming is Fun");

     cout << "\n String1: " << String1.GetValue();
     cout << "\n String2: " << String2.GetValue() << endl;

     // Example 2:
     cout << "\n Example 2: CountCapitalLetters()\n";

     cout << "\n Capital Letters Count in String1: " << String1.CountCapitalLetters();
     cout << "\n Capital Letters Count in String2: " << String2.CountCapitalLetters();
     cout << "\n Capital Letters Count in \'Hi, How are yOU Today\': " << clsString::CountCapitalLetters("Hi, How are yOU Today") << endl;

     // Example 3:
     cout << "\n Example 3: CountLetters()\n";

     cout << "\n Capital Letters Count in \'Hi, How are yOU Today\': " << clsString::CountLetters("Hi, How are yOU Today", clsString::CapitalLetters);
     cout << "\n Small Letters Count in \'Hi, How are yOU Today\': " << clsString::CountLetters("Hi, How are yOU Today", clsString::SmallLetters);
     cout << "\n All Letters Count in \'Hi, How are yOU Today\': " << clsString::CountLetters("Hi, How are yOU Today", clsString::All) << endl;

     // Example 4:
     cout << "\n Example 4:CountSmallLetters()\n";

     cout << "\n Small Letters Count in String1: " << String1.CountSmallLetters();
     cout << "\n Small Letters Count in String2: " << String2.CountSmallLetters();
     cout << "\n Small Letters Count in \'Hi, How are yOU Today\': " << clsString::CountSmallLetters("Hi, How are yOU Today") << endl;

     // Example 5:
     cout << "\n Example 5: CountSpecificLetter()\n";

     cout << "\n letter l count in String1 (Matching case): " << String1.CountSpecificLetter('l');
     cout << "\n letter l count in String1 (Without Matching case): " << String1.CountSpecificLetter('l', false);
     cout << "\n letter o count in \'Hi, How are yOU Today\' (Matching case): " << clsString::CountSpecificLetter("Hi, How are yOU Today", 'o');
     cout << "\n letter o count in \'Hi, How are yOU Today\' (Without Matching case): " << clsString::CountSpecificLetter("Hi, How are yOU Today", 'o', false) << endl;

     // Example 6:
     cout << "\n Example 6:CountVowels()\n";

     cout << "\n Vowels Count in String1: " << String1.CountVowels();
     cout << "\n Vowels count in String1: " << String2.CountVowels();
     cout << "\n Vowels count in \'Hi, How are yOU Today\': " << clsString::CountVowels("Hi, How are yOU Today") << endl;

     // Example 7:
     cout << "\n Example 7:CountWords()\n";

     cout << "\n Words Count in String1: " << String1.CountWords();
     cout << "\n Words count in String1: " << String2.CountWords();
     cout << "\n Words count in \'Hi, How are yOU Today\': " << clsString::CountWords("Hi, How are yOU Today") << endl;

     // Example 8:
     cout << "\n Example 8: InvertAllLettersCase()\n";

     String1.InvertAllLettersCase();
     cout << "\n String1 After Inverting its Letters Case: " << String1.GetValue();
     cout << "\n \'Hi, How are yOU Today\' After Inverting its Letters Case: " << clsString::InvertAllLettersCase("Hi, How are yOU Today") << endl;

     // Example 9:
     cout << "\n Example 9: InvertLetterCase()\n";

     String1.InvertAllLettersCase();
     cout << "\n Invert Letter i case: " << clsString::InvertLetterCase('i') << endl;

     // Example 10:
     cout << "\n Example 10: IsVowel()\n";

     char Letter = 'I';

     if (clsString::IsVowel(Letter))
          cout << "\n " << Letter << " is a Vowel\n";
     else
          cout << "\n " << Letter << " is NOT a Vowel\n";

     // Example 11 Join():
     cout << "\n Example 11: Join()\n";

     vector<string> vString = {"I", "love", "Programming.", "Programming", "is", "Fun."};

     string S1 = clsString::Join(vString, " ");

     cout << "\n String From Vector: " << S1;

     string arrString[] = {"I", "love", "Programming.", "Programming", "is", "Fun."};

     S1 = clsString::Join(arrString, 6, "###");

     cout << "\n String From Array with ### delimiter: " << S1 << endl;

     // Example 12 Length():
     cout << "\n Example 12: Length()\n";

     cout << "\n Length of String1: " << String1.Length();
     cout << "\n Length of String2: " << String2.Length();
     cout << "\n Length of \'Hi, How are yOU Today\': " << clsString::Length("Hi, How are yOU Today") << endl;

     // Example 13 LowerAllString():
     cout << "\n Example 13: LowerAllString()\n";

     String1.LowerAllString();
     cout << "\n String1 After Lowering All its Case: " << String1.GetValue();

     cout << "\n  \'Hi, How are yOU Today\' After Lowering All its Case: " << clsString::LowerAllString("Hi, How are yOU Today") << endl;

     system("pause>0");

     return 0;
}