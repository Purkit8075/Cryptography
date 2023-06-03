#include "caesar.h"
#include "playfair.h"
#include "vernam.h"
#include "vigenere.h"
#include <iostream>
#include <string>

int main(void)
{
	Vernam      ver;
	std::string s = "中文";
	std::cout << ver.EnCode(s) << '\n';
	ver.ShowSecureKey();
	std::cout << ver.DeCode(ver.EnCode(s)) << '\n';

	return 0;
}