#ifndef _VERNAM_H_
#define _VERNAM_H_

#include "criptographylist.h"
#include "public.h"
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

	Vernam(string sk);

	void ShowSecureKey() { std::cout << SecureKey << '\n'; }

	string EnCode(string pt);
	string DeCode(string ct);
	void   GenerateSecureKey(int SecureKeyLength);
	void   ResetSecureKey(string sk) { SecureKey = sk; }
};

void VernamMain(string Operation, string Text, string Key);
void VernamMain(string Operation, string Text);

#endif //!_VERNAM_H_