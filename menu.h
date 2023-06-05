#ifndef _MENU_H_
#define _MENU_H_

#include <iostream>
#include <string>
using std::string;

class Menu
{
private:
	const int MenuWidth;

public:
	Menu()
	    : MenuWidth(20)
	{
	}

	Menu(int mw)
	    : MenuWidth(mw)
	{
	}

	void PrintLine(char LineChar = -1);
	void PrintTitle(string Title);
	void PrintInCenterSpace(string CenterString);
	void PrintChoice(int Number, string Choice, ...);
};

#endif //!_MENU_H_