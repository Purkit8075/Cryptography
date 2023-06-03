#ifndef _VERNAM_H_
#define _VERNAM_H_

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using std::string;

class Vernam
{
private:
	string SecureKey;

public:
	Vernam()
	    : SecureKey("")
	{
	}

	void ShowSecureKey() { std::cout << SecureKey << '\n'; }

	string EnCode(string PlainText);
	string DeCode(string CipherText);
	void   GenerateSecureKey(int SecureKeyLength);
};

#endif //!_VERNAM_H_