#include "caesar.h"
#include "criptographylist.h"
#include "menu.h"
#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>

std::string UpperStringToLowerString(std::string s);

int JudgeEncryptionType(std::string Input);

void PrintMainMenu();

int main(int argc, char * argv[])
{
	while (true)
	{
		PrintMainMenu();
		int Choice = 0;
		std::cin >> Choice;

		switch (Choice)
		{
			case 1:
				CaesarMain();
				break;
		}

		system("clear");
	}
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

	for (int i = 0; i < sizeof(CriptographyList) / sizeof(const std::string);
	     i++)
		if (input == CriptographyList[i])
			return i;


	return ErrorValue;
}

void PrintMainMenu()
{
	Menu menu(40);
	menu.PrintTitle("Methods");
	menu.PrintChoice(5, "Caesar", "PlayFair", "Vigenere", "Vernam", "Quit");
	menu.PrintFoot();

	std::cout << "Please input your choice:\n";

	return;
}
