#include "playfair.h"



void PlayFair::ReadinBoxFromFile(string FilePath)
{
	std::ifstream fin;
	fin.open(FilePath.c_str());
	for (int i = 0; i < Box_Size; i++)
	{
		for (int j = 0; j < Box_Size; j++)
		{
			fin >> Box[i][j];
		}
	}
	fin.close();
	return;
}

void PlayFair::TypeinBox()
{
	for (int i = 0; i < Box_Size; i++)
		for (int j = 0; j < Box_Size; j++)
			std::cin >> Box[i][j];
	return;
}

void PlayFair::GenerateBox()
{
	std::srand(std::time(NULL));

	bool Flag[26] = {0}; // hash alpha
	Flag['Q' - 'A'] = 1; // delete Q
	// Generate the Box
	for (int i = 0; i < Box_Size; i++)
	{
		for (int j = 0; j < Box_Size; j++)
		{
			int Num = rand() % 26; // select from 0 to 25
			while (Flag[Num])      // if not selected
			{
				Num = rand() % 26; // continue to select
			}
			Flag[Num] = 1;         // mark the alpha
			Box[i][j] =
			    Num + 'A'; // write in alpha from A to Z
		}
	}
}

void PlayFair::ShowBox()
{
	for (int i = 0; i < Box_Size; i++)
	{
		for (int j = 0; j < Box_Size; j++)
		{
			std::cout << Box[i][j] << " ";
		}
		std::cout << '\n';
	}
}

void PlayFair::WriteBoxToFile()
{
	std::ofstream fout;
	fout.open("PlayFairBox.txt");
	for (int i = 0; i < Box_Size; i++)
		for (int j = 0; j < Box_Size; j++)
			fout << Box[i][j] << " ";

	fout.close();
	return;
}

void PlayFair::GenerateAlphaBox()
{
	// ignore Q
	AlphaBox['Q' - 'A'].x = -1;
	AlphaBox['Q' - 'A'].y = -1;
	for (int i = 0; i < Box_Size; i++)
	{
		for (int j = 0; j < Box_Size; j++)
		{
			int index = std::toupper(Box[i][j]) - 'A';
			AlphaBox[index].x = i;
			AlphaBox[index].y = j;
		}
	}
}

void PlayFair::ShowAlphaBox()
{
	for (int i = 0; i < 26; i++)
		std::cout << (char)(i + 'A') << " " << AlphaBox[i].x
		          << " " << AlphaBox[i].y << '\n';

	std::cout << AlphaBox['A' - 'A'].x << '\n';
	std::cout << AlphaBox['B' - 'A'].x;
	return;
}

string PlayFair::Preprocess(string PlainText)
{
	string AfterPreprocess = "";
	// remove not alpha char
	for (int i = 0; i < PlainText.length(); i++)
		if (std::isalpha(PlainText[i]) &&
		    PlainText[i] != 'Q' && PlainText[i] != 'q')
			AfterPreprocess += std::toupper(PlainText[i]);

	// use Z to separate the same alpha
	for (int i = 1; i < AfterPreprocess.length(); i++)
		if (std::toupper(AfterPreprocess[i - 1]) ==
		    std::toupper(AfterPreprocess[i]))
			AfterPreprocess.insert(i, "Z");

	// use Z to make the PlainText.length() to even
	if (AfterPreprocess.length() % 2)
		AfterPreprocess += 'Z';

	return AfterPreprocess;
}

string PlayFair::EnCode(string pt)
{
	// judge if the Box is empty
	int Count = 0;
	for (int i = 0; i < Box_Size; i++)
	{
		for (int j = 0; j < Box_Size; j++)
		{
			if (Box[i][j] == 0)
				Count++;
			if (Count > 2) // the Box is empty
				return "The Box is empty!";
		}
	}

	GenerateAlphaBox(); // Generate alpha box

	string CipherText = "";
	string PlainText = Preprocess(pt);

	for (int i = 0; i < PlainText.length(); i += 2)
	{
		// the same row
		if (AlphaBox[PlainText[i] - 'A'].x ==
		    AlphaBox[PlainText[i + 1] - 'A'].x)
		{
			CipherText +=
			    Box[(AlphaBox[PlainText[i] - 'A'].y + 1) %
			        Box_Size];
			CipherText +=
			    Box[(AlphaBox[PlainText[i + 1] - 'A'].y +
			         1) %
			        Box_Size];
		}
	}

	return CipherText;
}
