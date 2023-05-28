#include "caesar.h"
#include "playfair.h"
#include <iostream>
#include <string>

int main(void)
{
	PlayFair playfair;
	playfair.ReadinBoxFromFile("./test.txt");
	std::cout << playfair.EnCode("abc");
}