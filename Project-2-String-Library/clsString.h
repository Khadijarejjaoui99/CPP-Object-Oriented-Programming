#pragma once
#include <iostream>
#include <string>
using namespace std;

class clsString
{
private:
    string _Value;

    static char _InvertLetterCase(char C)
    {
        return isupper(C) ? tolower(C) : toupper(C);
    }

    static bool _IsVowel(char Letter)
    {
        Letter = tolower(Letter);

        return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));
    }

public:
    clsString()
    {
        _Value = "";
    }

    clsString(string Value)
    {
        _Value = Value;
    }

    void SetValue(string Value)
    {
        _Value = Value;
    }

    string GetValue()
    {
        return _Value;
    }

    static void PrintFirstLetterOfEachWord(string S1)
    {
        bool isFirstLetter = true;

        cout << "\n First Letter in each Word:\n";

        for (short i = 0; i < S1.length(); i++)
        {
            if (S1[i] != ' ' && isFirstLetter)
                cout << " " << S1[i] << "\n";

            isFirstLetter = (S1[i] == ' ' ? true : false);
        }
    }

    void PrintFirstLetterOfEachWord()
    {
        PrintFirstLetterOfEachWord(_Value);
    }

    static string UpperFirstLetterOfEachWord(string S1)
    {
        bool isFirstLetter = true;

        for (short i = 0; i < S1.length(); i++)
        {
            if (S1[i] != ' ' && isFirstLetter)
                S1[i] = toupper(S1[i]);

            isFirstLetter = (S1[i] == ' ' ? true : false);
        }

        return S1;
    }

    string UpperFirstLetterOfEachWord()
    {
        return UpperFirstLetterOfEachWord(_Value);
    }

    static string LowerFirstLetterOfEachWord(string S1)
    {
        bool isFirstLetter = true;

        for (short i = 0; i < S1.length(); i++)
        {
            if (S1[i] != ' ' && isFirstLetter)
                S1[i] = tolower(S1[i]);

            isFirstLetter = (S1[i] == ' ' ? true : false);
        }

        return S1;
    }

    string LowerFirstLetterOfEachWord()
    {
        return LowerFirstLetterOfEachWord(_Value);
    }

    static string UpperAllString(string S1)
    {
        for (short i = 0; i < S1.length(); i++)
            S1[i] = toupper(S1[i]);

        return S1;
    }

    string UpperAllString()
    {
        return UpperAllString(_Value);
    }

    static string LowerAllString(string S1)
    {
        for (short i = 0; i < S1.length(); i++)
            S1[i] = tolower(S1[i]);

        return S1;
    }

    string LowerAllString()
    {
        return LowerAllString(_Value);
    }

    static string InvertAllStringLettersCase(string S1)
    {
        for (short i = 0; i < S1.length(); i++)
        {
            S1[i] = _InvertLetterCase(S1[i]);
        }

        return S1;
    }

    string InvertAllStringLettersCase()
    {
        return InvertAllStringLettersCase(_Value);
    }

    static short CountLetter(string S1, char Letter, bool isMatchCase = true)
    {
        short Counter = 0;

        for (short i = 0; i < S1.length(); i++)
        {
            if (isMatchCase)
            {
                if (S1[i] == Letter)
                    Counter++;
            }
            else
            {
                if (tolower(S1[i]) == tolower(Letter))
                    Counter++;
            }
        }

        return Counter;
    }

    short CountLetter(char Letter, bool isMatchCase = true)
    {
        return CountLetter(_Value, Letter, isMatchCase);
    }

    static short CountVowels(string S1)
    {
        short Counter = 0;

        for (short i = 0; i < S1.length(); i++)
        {
            if (_IsVowel(S1[i]))
                Counter++;
        }

        return Counter;
    }

    short CountVowels()
    {
        return CountVowels(_Value);
    }
};