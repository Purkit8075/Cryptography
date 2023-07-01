#include "vernam.h"

string Vernam::EnCode(string pt)
{
	string PlainText = StringToBinaryString(pt); // Generate PlainText
	GenerateSecureKey(PlainText.length());
	return PlainText ^ SecureKey;
}

string Vernam::DeCode(string ct)
{
	string CipherText = ct;
	return BinaryStringToString(CipherText ^ SecureKey);
}

void Vernam::GenerateSecureKey(int SecureKeyLength)
{
	std::srand(std::time(NULL));

	SecureKey = "";

	for (int i = 0; i < SecureKeyLength; i++)
		SecureKey += '0' + (rand() % 2);
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

void VernamMain(string Operation, string Text)
{
	using std::cout;

	Vernam vernam;

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
