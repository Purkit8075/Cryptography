#include "caesar.h"
#include "playfair.h"
#include <iostream>
#include <string>

int main(void)
{
	PlayFair playfair;
	playfair.ReadinBoxFromFile("./test.txt");
	std::cout << playfair.EnCode("qq") << '\n';
	std::cout << playfair.DeCode(playfair.EnCode("qq"));
}