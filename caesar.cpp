#include "caesar.h"

string Caesar::EnCode(string PlainText, int index)
{
	string CipherText = "";
	index %= 26; // limit index to (-26,26)
	for (int i = 0; i < PlainText.length(); i++)
	{
		if (!std::isalpha(PlainText[i])) // ignore non-alphabetic
		{
			CipherText += PlainText[i];
			continue;
		}
		CipherText +=
		    (std::toupper(PlainText[i]) - 'A' + index + 26) % 26 + 'A';
	}
	return CipherText;
}

string Caesar::DeCode(string CipherText, int index)
{
	string PlainText = "";
	index %= 26; // limit index to (-26,26)
	for (int i = 0; i < CipherText.length(); i++)
	{
		if (!std::isalpha(CipherText[i])) // ignore non-alphabetic
		{
			PlainText += CipherText[i];
			continue;
		}
		char ch = (std::toupper(CipherText[i]) - 'A' - index + 26) % 26 + 'A';

		PlainText += ch;
	}
	return PlainText;
}

void CaesarMain()
{
	using std::cout;

	Caesar caesar;

	while (true)
	{
		ShowCaesarMenu();
		int    CaesarChoice = 0;
		string Text = "";
		int    Index = 0;

		std::cin >> CaesarChoice;

		switch (CaesarChoice)
		{
			case 1:
			{
				cout << "Please input PlainText:\n";
				std::getchar();
				std::getline(std::cin, Text);
				cout << "Please enter the Key Number:\n";
				std::cin >> Index;
				cout << "The CipherText is:\n";
				cout << caesar.EnCode(Text, Index) << '\n';
				std::getchar();
				std::getchar();
				break;
			}
			case 2:
			{
				cout << "Please input CipherText:\n";
				std::getchar();
				std::getline(std::cin, Text);
				cout << "Please enter the Key Number:\n";
				std::cin >> Index;
				cout << "The PlainText is:\n";
				cout << caesar.DeCode(Text, Index) << '\n';
				std::getchar();
				std::getchar();
				break;
			}
			case 3:
			{
				return;
			}
			default:
			{
				cout << "Please input the right choice!\n";
			}
		}
	}
}

void ShowCaesarMenu()
{
	Menu menu(40);
	menu.PrintTitle("Caesar");
	menu.PrintChoice(3, "EnCode", "DeCode", "Quit");
	menu.PrintFoot();

	return;
}
