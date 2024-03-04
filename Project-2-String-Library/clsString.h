#pragma once
#include <iostream>
using namespace std;

class clsString
{
private:
    string _Value;

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
};