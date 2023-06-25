#include "caesar.h"
#include "criptographylist.h"
#include "menu.h"
#include "playfair.h"
#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>

std::string UpperStringToLowerString(std::string s);
int         JudgeEncryptionType(std::string Input);
int         StringToInt(std::string s);

int main(int argc, char * argv[])
{
	using std::cout;
	using std::string;

	int CriphtographyType = JudgeEncryptionType(argv[1]);

	if (CriphtographyType == ErrorValue)
	{
		cout << "Please input right encryption method\n";
		return 0;
	}

	switch (CriphtographyType)
	{
		case CAESAR:
		{
			CaesarMain(UpperStringToLowerString(argv[2]), argv[3],
			           (argc == 5 ? StringToInt(argv[4]) : 4));
			break;
		}
		case PLAYFAIR:
		{
			// if doesn't have the last value, set it false
			PlayfairMain(
			    UpperStringToLowerString(argv[2]), argv[3],
			    (argc == 5 ? UpperStringToLowerString(argv[4]) : "false"));
			break;
		}
		case VIGENERE:
		{
			cout << "vigenere";
			break;
		}
		case VERNAM:
		{
			cout << "vernam";
			break;
		}
	}
	return 0;
}

std::string UpperStringToLowerString(std::string s)
{
	string rs = "";
	for (int i = 0; i < s.length(); i++)
		if (std::isalpha(s[i]))
			rs += std::tolower(s[i]);

	return rs;
}

int JudgeEncryptionType(std::string Input)
{
	std::string input = UpperStringToLowerString(Input);

	for (int i = 0; i < sizeof(CriptographyList) / sizeof(std::string); i++)
		if (input == CriptographyList[i])
			return i;

	return ErrorValue;
}

int StringToInt(std::string s)
{
	int  Ans = 0;
	bool IsNegative = false;

	for (int i = 0; i < s.length(); i++)
	{
		if (!std::isalnum(s[i]))
		{
			if (i == 0 && s[i] == '-')
				IsNegative = true;
			else
				return 0;
		}
		int Num = s[i] - '0';
		Ans = Ans * 10 + Num;
	}

	return (IsNegative ? (Ans * -1) : Ans);
}
