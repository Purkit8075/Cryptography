#include "menu.h"

void Menu::PrintLine(char LineChar)
{
	if (LineChar == -1)
		return;
	for (int i = 0; i < MenuWidth; i++)
		std::cout << LineChar;
	std::cout << '\n';
	return;
}

void Menu::PrintTitle(string Title)
{
	PrintLine('=');
	PrintInCenterSpace(Title);
	std::cout << Title << '\n';
	PrintLine('=');
}

void Menu::PrintInCenterSpace(string CenterString)
{
	if (CenterString.length() > MenuWidth)
		return;
	int Space = (MenuWidth - CenterString.length()) / 2;
	for (int i = 0; i < Space; i++)
		std::cout << " ";
	return;
}

void Menu::PrintChoice(int Count, ...)
{
	va_list args;
	va_start(args, Count);

	for (int i = 0; i < Count; i++)
	{
		char * arg = va_arg(args, char *);
		std::cout << "[" << i + 1 << "]"
		          << " ";
		std::cout << arg << '\n';
	}

	va_end(args);
}
