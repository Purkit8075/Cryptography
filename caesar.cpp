#include "caesar.h"

string Caesar::EnCode(string PlainText, int index)
{
	string CipherText = "";
	for (int i = 0; i < PlainText.length(); i++)
	{
		if (!isalpha(PlainText[i]))
		{
			CipherText += PlainText[i];
			continue;
		}
		CipherText +=
		    (std::toupper(PlainText[i]) - 'A' + index) %
		        26 +
		    'A';
	}
	return CipherText;
}

string Caesar::DeCode(string CipherText, int index)
{
	string PlainText = "";
	for (int i = 0; i < CipherText.length(); i++)
	{
		if (!isalpha(CipherText[i]))
		{
			PlainText += CipherText[i];
			continue;
		}
		char ch = (std::toupper(CipherText[i]) - 'A' -
		           index + 26) %
		              26 +
		          'A';

		PlainText += ch;
	}
	return PlainText;
}
