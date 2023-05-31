#include "caesar.h"
#include "playfair.h"
#include "vigenere.h"
#include <iostream>
#include <string>

int main(void)
{
	std::string key = "purkit";
	std::string s = "purkit";
	Vignere     vig(key);
	std::cout << vig.EnCode(s) << '\n';
	std::cout << vig.DeCode(vig.EnCode(s)) << '\n';
	return 0;
}