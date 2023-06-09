#include "caesar.h"

string Caesar::EnCode(string PlainText, int index)
{
	string CipherText = "";
	index %= 26; // limit index to (-26,26)
	for (int i = 0; i < PlainText.length(); i++)
	{
		if (!std::isalpha(PlainText[i])) // ignore non-alphabetic
		{
			CipherText += PlainText[i];
			continue;
		}
		CipherText +=
		    (std::toupper(PlainText[i]) - 'A' + index + 26) % 26 + 'A';
	}
	return CipherText;
}

string Caesar::DeCode(string CipherText, int index)
{
	string PlainText = "";
	index %= 26; // limit index to (-26,26)
	for (int i = 0; i < CipherText.length(); i++)
	{
		if (!std::isalpha(CipherText[i])) // ignore non-alphabetic
		{
			PlainText += CipherText[i];
			continue;
		}
		char ch = (std::toupper(CipherText[i]) - 'A' - index + 26) % 26 + 'A';

		PlainText += ch;
	}
	return PlainText;
}

void CaesarMain(string Operation, string Text, int Index)
{
	using std::cout;

	const int OperationSize = 2; // count of operation

	// opeartion type list
	const string OperationType[OperationSize] = {"encode", "decode"};

	int    Type = GetOperationType(Operation, OperationType,
	                               OperationSize); // default value
	Caesar caesar;

	// if the operation type is error
	// print an error string and return
	if (Type == ErrorValue)
	{
		cout << ErrorOperation;
		return;
	}

	// encode and decode
	if (Type == ENCODE)
		cout << caesar.EnCode(Text, Index) << '\n';
	else
		cout << caesar.DeCode(Text, Index) << '\n';

	return;
}