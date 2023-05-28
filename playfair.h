#ifndef _PLAYFAIR_H_
#define _PLAYFAIR_H_

#include <cctype>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
using std::string;

class PlayFair
{
private:
	struct Point
	{
		int x = 0;
		int y = 0;
	};

	static const int Box_Size = 5;
	char             Box[Box_Size][Box_Size] = {0};

	// every alpha's location in Box
	Point AlphaBox[26] = {0};

public:
	/*Constructor*/

	/*Get Box Methods*/
	// Read from file
	void ReadinBoxFromFile(string FilePath);
	// Read by typing
	void TypeinBox();
	// Random Generate
	void GenerateBox();

	/*Operate Box*/
	// Show Box
	void ShowBox();
	// Write Box to file
	void WriteBoxToFile();
	// hash alpha
	void GenerateAlphaBox();

	// For debug
	void ShowAlphaBox();

	// Operate PlainText
	string Preprocess(string PlainText);

	// Encode
	string EnCode(string pt);
	// Decode
	string DeCode(string ct);
};

#endif //!_PLAYFAIR_H_