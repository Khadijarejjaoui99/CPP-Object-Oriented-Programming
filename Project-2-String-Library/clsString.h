#pragma once
#include <iostream>
#include <string>
#include <vector>
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

    static short Length(string S1)
    {
        return S1.length();
    }

    short Length()
    {
        return Length(_Value);
    }

    static void PrintFirstLetterOfEachWord(string S1)
    {
        bool isFirstLetter = true;

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

    void UpperFirstLetterOfEachWord()
    {
        _Value = UpperFirstLetterOfEachWord(_Value);
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

    void LowerFirstLetterOfEachWord()
    {
        _Value = LowerFirstLetterOfEachWord(_Value);
    }

    static string UpperAllString(string S1)
    {
        for (short i = 0; i < S1.length(); i++)
            S1[i] = toupper(S1[i]);

        return S1;
    }

    void UpperAllString()
    {
        _Value = UpperAllString(_Value);
    }

    static string LowerAllString(string S1)
    {
        for (short i = 0; i < S1.length(); i++)
            S1[i] = tolower(S1[i]);

        return S1;
    }

    void LowerAllString()
    {
        _Value = LowerAllString(_Value);
    }

    static char InvertLetterCase(char C)
    {
        return isupper(C) ? tolower(C) : toupper(C);
    }

    static string InvertAllLettersCase(string S1)
    {
        for (short i = 0; i < S1.length(); i++)
        {
            S1[i] = InvertLetterCase(S1[i]);
        }

        return S1;
    }

    void InvertAllLettersCase()
    {
        _Value = InvertAllLettersCase(_Value);
    }

    enum enWhatToCount
    {
        SmallLetters = 0,
        CapitalLetters = 1,
        All = 3
    };

    static short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All)
    {

        if (WhatToCount == enWhatToCount::All)
        {
            return S1.length();
        }

        short Counter = 0;

        for (short i = 0; i < S1.length(); i++)
        {

            if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
                Counter++;

            if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
                Counter++;
        }

        return Counter;
    }

    static short CountCapitalLetters(string S1)
    {
        short Counter = 0;

        for (short i = 0; i < S1.length(); i++)
        {
            if (isupper(S1[i]))
                Counter++;
        }

        return Counter;
    }

    short CountCapitalLetters()
    {
        return CountCapitalLetters(_Value);
    }

    static short CountSmallLetters(string S1)
    {
        short Counter = 0;

        for (short i = 0; i < S1.length(); i++)
        {
            if (islower(S1[i]))
                Counter++;
        }

        return Counter;
    }

    short CountSmallLetters()
    {
        return CountSmallLetters(_Value);
    }

    static short CountSpecificLetter(string S1, char Letter, bool isMatchCase = true)
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

    short CountSpecificLetter(char Letter, bool isMatchCase = true)
    {
        return CountSpecificLetter(_Value, Letter, isMatchCase);
    }

    static bool IsVowel(char Letter)
    {
        Letter = tolower(Letter);

        return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));
    }

    static short CountVowels(string S1)
    {
        short Counter = 0;

        for (short i = 0; i < S1.length(); i++)
        {
            if (IsVowel(S1[i]))
                Counter++;
        }

        return Counter;
    }

    short CountVowels()
    {
        return CountVowels(_Value);
    }

    static void PrintVowels(string S1)
    {
        cout << " ";

        for (short i = 0; i < S1.length(); i++)
        {
            if (IsVowel(S1[i]))
                cout << S1[i] << " ";
        }

        cout << endl;
    }

    void PrintVowels()
    {
        PrintVowels(_Value);
    }

    static void PrintEachWordInString(string S1)
    {
        string Delim = " ", sWord = "";
        short pos = 0;

        while ((pos = S1.find(Delim)) != std::string::npos)
        {
            sWord = S1.substr(0, pos);

            if (sWord != "")
                cout << " " << sWord << endl;

            S1.erase(0, pos + Delim.length());
        }

        if (S1 != "")
            cout << " " << S1 << endl;
    }

    void PrintEachWordInString()
    {
        PrintEachWordInString(_Value);
    }

    static short CountWords(string S1)
    {
        string Delim = " ", sWord = "";

        short pos = 0, Counter = 0;

        while ((pos = S1.find(Delim)) != std::string::npos)
        {
            sWord = S1.substr(0, pos);

            if (sWord != "")
                Counter++;

            S1.erase(0, pos + Delim.length());
        }

        if (S1 != "")
            Counter++;

        return Counter;
    }

    short CountWords()
    {
        return CountWords(_Value);
    }

    static vector<string> Split(string S1, string Delim)
    {
        string sWord = "";
        short pos = 0;
        vector<string> vString;

        while ((pos = S1.find(Delim)) != std::string::npos)
        {
            sWord = S1.substr(0, pos);

            if (sWord != "")
                vString.push_back(sWord);

            S1.erase(0, pos + Delim.length());
        }

        if (S1 != "")
            vString.push_back(S1);

        return vString;
    }

    vector<string> Split(string Delim)
    {
        return Split(_Value, Delim);
    }

    static string TrimLeft(string S1)
    {
        for (short i = 0; i < S1.length(); i++)
        {
            if (S1[i] != ' ')
            {
                return S1.substr(i, S1.length() - i);
            }
        }

        return "";
    }

    void TrimLeft()
    {
        _Value = TrimLeft(_Value);
    }

    static string TrimRight(string S1)
    {

        for (short i = S1.length() - 1; i >= 0; i--)
        {
            if (S1[i] != ' ')
            {
                return S1.substr(0, i + 1);
            }
        }

        return "";
    }

    void TrimRight()
    {
        _Value = TrimRight(_Value);
    }

    static string Trim(string S1)
    {
        return TrimLeft(TrimRight(S1));
    }

    void Trim()
    {
        _Value = Trim(_Value);
    }

    static string Join(vector<string> vString, string Delim)
    {
        string S1 = "";

        for (string &S : vString)
        {
            S1 += S + Delim;
        }

        return S1.substr(0, S1.length() - Delim.length());
    }

    static string Join(string arrString[], short Length, string Delim)
    {
        string S1 = "";

        for (int i = 0; i < Length; i++)
        {
            S1 += arrString[i] + Delim;
        }

        return S1.substr(0, S1.length() - Delim.length());
    }

    static string ReverseWords(string S1)
    {
        vector<string> vString;
        string S2 = "";

        vString = Split(S1, " ");

        vector<string>::iterator iter = vString.end();

        while (iter != vString.begin())
        {
            --iter;

            S2 += *iter + " ";
        }

        return S2.substr(0, S2.length() - 1);
    }

    void ReverseWords()
    {
        _Value = ReverseWords(_Value);
    }

    static string ReplaceWord(string S1, string StringToReplace, string sReplaceTo, bool MatchCase = true)
    {
        vector<string> vString = Split(S1, " ");

        for (string &s : vString)
        {
            if (MatchCase)
            {
                if (s == StringToReplace)
                    s = sReplaceTo;
            }
            else
            {
                if (LowerAllString(s) == LowerAllString(StringToReplace))
                    s = sReplaceTo;
            }
        }

        return Join(vString, " ");
    }

    string ReplaceWord(string StringToReplace, string sReplaceTo, bool MatchCase)
    {
        return ReplaceWord(_Value, StringToReplace, sReplaceTo, MatchCase);
    }

    static string RemovePunctuationsInString(string S1)
    {
        string S2 = "";

        for (short i = 0; i < S1.length(); i++)
        {
            if (!ispunct(S1[i]))
            {
                S2 += S1[i];
            }
        }

        return S2;
    }

    void RemovePunctuationsInString()
    {
        _Value = RemovePunctuationsInString(_Value);
    }
};