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

void VernamMain(string Operation, string Text, string Key)
{
	using std::cout;

	Vernam vernam;
	vernam.ResetSecureKey(Key);

	const int    OperationSize = 2;
	const string OperationType[OperationSize] = {"encode", "decode"};

	int Type = GetOperationType(Operation, OperationType, OperationSize);

	if (Type == -1)
	{
		cout << ErrorOperation;
		return;
	}

	switch (Type)
	{
		case ENCODE:
		{
			cout << vernam.EnCode(Text) << '\n';
			break;
		}
		case DECODE:
		{
			cout << vernam.DeCode(Text) << '\n';
			break;
		}
	}
	return;
}

void VernamMain(string Operation, string Text, int KeyLength)
{
	using std::cout;

	Vernam vernam;
	vernam.GenerateSecureKey(KeyLength);

	const int    OperationSize = 2;
	const string OperationType[OperationSize] = {"encode", "decode"};

	int Type = GetOperationType(Operation, OperationType, OperationSize);

	if (Type == -1)
	{
		cout << ErrorOperation;
		return;
	}

	switch (Type)
	{
		case ENCODE:
		{
			cout << vernam.EnCode(Text) << '\n';
			break;
		}
		case DECODE:
		{
			cout << vernam.DeCode(Text) << '\n';
			break;
		}
	}
	cout << "The secure key is:\n";
	vernam.ShowSecureKey();
	return;
}
