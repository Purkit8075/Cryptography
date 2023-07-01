#ifndef _FEISTEL_H_
#define _FEISTEL_H_

#include "public.h"
#include <iostream>
#include <string>
using std::string;

class Feistel
{
private:
	string SecureKey;

public:
	Feistel()
	    : SecureKey("")
	{
	}

	Feistel(string sk)
	    : SecureKey(sk)
	{
	}

	string RoundFunction(string R, string K);
};

#endif //!_FEISTEL_H_