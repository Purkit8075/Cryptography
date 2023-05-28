#include "caesar.h"
#include "playfair.h"
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	PlayFair playfair;
	// playfair.GenerateBox();
	// playfair.ShowBox();
	// playfair.WriteBoxToFile();
	// std::cout << playfair.Preprocess("aabc13");
	playfair.ReadinBoxFromFile("./test.txt");
	// std::cout << playfair.EnCode("FK");
	// playfair.GenerateBox();
	// playfair.ShowBox();
	string s = "AB";
	playfair.GenerateAlphaBox();
	playfair.ShowAlphaBox();
	cout << endl;
	cout << playfair.Preprocess(s) << endl;
	cout << playfair.EnCode(s);
}