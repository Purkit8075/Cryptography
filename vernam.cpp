#include "vernam.h"



string Vernam::EnCode(string PlainText)
{
	string CipherText = "";
	GenerateSecureKey(PlainText.length());
	for (int i = 0; i < PlainText.length(); i++)
		CipherText += (char)(PlainText[i] ^ SecureKey[i]);
	return CipherText;
}

string Vernam::DeCode(string CipherText)
{
	string PlainText = "";
	for (int i = 0; i < CipherText.length(); i++)
		PlainText += (char)(CipherText[i] ^ SecureKey[i]);
	return PlainText;
}

void Vernam::GenerateSecureKey(int SecureKeyLength)
{
	std::srand(std::time(NULL));

	for (int i = 0; i < SecureKeyLength; i++)
		SecureKey += (char)(rand() % 256);
	return;
}