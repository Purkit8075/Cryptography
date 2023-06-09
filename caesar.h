#ifndef _CAESAR_H_
#define _CAESAR_H_

#include "menu.h"
#include <cctype>
#include <string>
using std::string;

class Caesar
{
public:
	string EnCode(string PlainText, int index = 4);
	string DeCode(string CipherText, int index = 4);
};

void CaesarMain();
void ShowCaesarMenu();

#endif //!_CAESAR_H_