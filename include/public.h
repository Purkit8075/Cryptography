#ifndef _PUBLIC_H_
#define _PUBLIC_H_

#include "criptographylist.h"
#include <algorithm>
#include <bitset>
#include <iostream>
#include <string>
using std::string;

int GetOperationType(string Operation, const string OperationList[], int Size);

string StringToBinaryString(string str);
string BinaryStringToString(string bstr);

string operator^(string s1, string s2);

#endif //!_PUBLIC_H_