#include "vigenere.h"



Vignere::Vignere(string sk)
{
	SecureKey = ""; // init SecureKey

	// if is alpha add to SecureKey
	for (int i = 0; i < sk.length(); i++)
		if (std::isalpha(sk[i]))
			SecureKey += std::toupper(sk[i]);
}

Vignere::Vignere()
    : SecureKey("")
{
}

void Vignere::InputSecureKey()
{
	string sk = ""; // init
	std::cin >> sk; // read from keyboard
	for (int i = 0; i < sk.length(); i++)
		if (std::isalpha(sk[i]))
			SecureKey += std::toupper(sk[i]);

	return;
}

void Vignere::ReadSecureKeyFromFile(string FilePath)
{
	std::ifstream fin;
	fin.open(FilePath.c_str()); // open file
	string ReadString = "";     // init strings
	string ResultString = "";

	while (!fin.eof())
	{
		std::getline(fin, ReadString); // read a line of key
		ResultString += ReadString;    // add to result key
	}

	fin.close(); // close file

	for (int i = 0; i < ResultString.length(); i++)
		if (std::isalpha(ResultString[i]))
			SecureKey += std::toupper(ResultString[i]);
	return;
}

void Vignere::RandomKey(int Len)
{
	std::srand(std::time(0)); // set random seed
	for (int i = 0; i < Len; i++)
		SecureKey +=
		    (std::rand() % 26) + 'A'; // generate key
	return;
}

string Vignere::EnCode(string PlainText)
{
	if (SecureKeyEmpty()) // if empty, return waring
		return EmptyWarning;

	string CipherText = "";
	int    KeyLength = SecureKey.length();
	for (int i = 0; i < PlainText.length(); i++)
	{
		if (!std::isalpha(PlainText[i]))
			continue;

		string temp = "";
		temp += PlainText[i];
		CipherText += caesar.EnCode(
		    temp, SecureKey[i % KeyLength] - 'A' + 1);
	}
	return CipherText;
}

string Vignere::DeCode(string CipherText)
{
	if (SecureKeyEmpty())
		return EmptyWarning;

	string PlainText = "";
	int    KeyLength = SecureKey.length();

	for (int i = 0; i < CipherText.length(); i++)
	{
		string temp = "";
		temp += CipherText[i];
		PlainText += caesar.DeCode(
		    temp, SecureKey[i % KeyLength] - 'A' + 1);
	}
	return PlainText;
}
