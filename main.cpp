#include "criptographylist.h"
#include "menu.h"
#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>

std::string UpperStringToLowerString(std::string s);

int JudgeEncryptionType(std::string Input);

int main(int argc, char * argv[])
{
	Menu menu(20);
	menu.PrintTitle("test");
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

	for (int i = 0; i < sizeof(CriptographyList) /
	                        sizeof(const std::string);
	     i++)
		if (input == CriptographyList[i])
			return i;


	return ErrorValue;
}
