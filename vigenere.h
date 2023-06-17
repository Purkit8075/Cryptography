#ifndef _VIGENERE_H_
#define _VIGENERE_H_

#include "caesar.h"
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
using std::string;

static const char * EmptyWarning = "The secure key is empty!";

class Vignere
{
private:
	string SecureKey;
	Caesar caesar;

public:
	/*Constructors*/

	Vignere(string sk);
	Vignere();

	// read key from keyboard
	void InputSecureKey();
	// read key from file
	void ReadSecureKeyFromFile(string FilePath);
	// random key
	void RandomKey(int Len = 4); // default key length

	// judge securekey is empty or not
	bool SecureKeyEmpty() { return !SecureKey.length(); }

	// Encode
	string EnCode(string PlainText);

	// Decode
	string DeCode(string CipherText);

	// Show SerucreKey
	void ShowSecureKey() { std::cout << SecureKey << '\n'; }
};

#endif //!_VIGENERE_H_