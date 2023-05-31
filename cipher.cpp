#include "caesar.h"
#include "playfair.h"
#include "vigenere.h"
#include <iostream>
#include <string>

int main(void)
{
	// std::string key = "purkit";
	std::string s = "purkit1234";
	Vignere     vig;
	// vig.ReadSecureKeyFromFile("./test.txt");
	// vig.ShowSecureKey();
	// vig.RandomKey(100);
	std::cout << vig.EnCode(s) << '\n';
	std::cout << vig.DeCode(vig.EnCode(s)) << '\n';
	return 0;
}