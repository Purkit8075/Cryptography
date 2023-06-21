#ifndef _CRIPTOGRAPHYLIST_H_
#define _CRIPTOGRAPHYLIST_H_

#include <string>
using std::string;

#define ErrorValue -1

// Encryption Method
#define CAESAR 0
#define PLAYFAIR 1
#define VIGENERE 2
#define VERNAM 3

// Operation type
#define ENCODE 0
#define DECODE 1

const string CriptographyList[] = {"caesar", "playfair", "vigenere", "vernam"};

const string ErrorOperation = "Please input right operation!\n";

#endif //!_CRIPTOGRAPHYLIST_H_