#include "playfair.h"

void PlayFair::ReadinBoxFromFile(string FilePath)
{
	std::ifstream fin;
	fin.open(FilePath.c_str());
	for (int i = 0; i < Box_Size; i++)
	{
		for (int j = 0; j < Box_Size; j++)
		{
			char ch;
			fin >> ch;
			Box[i][j] = std::toupper(ch);
		}
	}
	fin.close();
	Box_Empty = false;
	GenerateAlphaBox();
	return;
}

void PlayFair::TypeinBox()
{
	for (int i = 0; i < Box_Size; i++)
	{
		for (int j = 0; j < Box_Size; j++)
		{
			char ch;
			std::cin >> ch;
			Box[i][j] = std::toupper(ch);
		}
	}
	Box_Empty = false;
	GenerateAlphaBox();
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
			Box[i][j] = Num + 'A'; // write in alpha from A to Z
		}
	}
	Box_Empty = false;
	GenerateAlphaBox();
	return;
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
			AlphaBox[index].x = j;
			AlphaBox[index].y = i;
		}
	}
	return;
}

void PlayFair::ShowAlphaBox()
{
	for (int i = 0; i < 26; i++)
		std::cout << (char)(i + 'A') << " " << AlphaBox[i].x << " "
		          << AlphaBox[i].y << '\n';

	std::cout << AlphaBox['A' - 'A'].y << '\n';
	std::cout << AlphaBox['B' - 'A'].y << '\n';
	return;
}

string PlayFair::Preprocess(string PlainText)
{
	string AfterPreprocess = "";
	// remove not alpha char
	for (int i = 0; i < PlainText.length(); i++)
	{
		if (std::isalpha(PlainText[i]))
		{
			if (PlainText[i] != 'Q' && PlainText[i] != 'q')
				AfterPreprocess += std::toupper(PlainText[i]);
			else
				AfterPreprocess += 'Z';
		}
	}

	// use Z to separate the same alpha
	for (int i = 1; i < AfterPreprocess.length(); i++)
	{
		if (std::toupper(AfterPreprocess[i - 1]) ==
		    std::toupper(AfterPreprocess[i]))
		{
			if (std::toupper(AfterPreprocess[i] == 'Z'))
				AfterPreprocess.insert(i, "H");
			else
				AfterPreprocess.insert(i, "Z");
		}
	}

	// use Z to make the PlainText.length() to even
	if (AfterPreprocess.length() % 2)
		AfterPreprocess +=
		    ((AfterPreprocess[AfterPreprocess.length() - 1] == 'Z') ? 'H'
		                                                            : 'Z');

	return AfterPreprocess;
}

string PlayFair::EnCode(string pt)
{
	// judge if the Box is empty
	if (Box_Empty)
		return "The Box is empty!";

	string CipherText = "";
	string PlainText = Preprocess(pt);

	for (int i = 0; i < PlainText.length(); i += 2)
	{
		// Get letter location
		int FirstLetterX = AlphaBox[PlainText[i] - 'A'].x;
		int FirstLetterY = AlphaBox[PlainText[i] - 'A'].y;
		int SecondLetterX = AlphaBox[PlainText[i + 1] - 'A'].x;
		int SecondLetterY = AlphaBox[PlainText[i + 1] - 'A'].y;

		// the same row
		if (FirstLetterY == SecondLetterY)
		{
			CipherText += Box[FirstLetterY][(FirstLetterX + 1) % Box_Size];
			CipherText += Box[SecondLetterY][(SecondLetterX + 1) % Box_Size];
		}
		else if (FirstLetterX == SecondLetterX) // the same column
		{
			CipherText += Box[(FirstLetterY + 1) % Box_Size][FirstLetterX];
			CipherText += Box[(SecondLetterY + 1) % Box_Size][SecondLetterX];
		}
		else
		{
			CipherText += Box[SecondLetterY][FirstLetterX];
			CipherText += Box[FirstLetterY][SecondLetterX];
		}
	}

	return CipherText;
}

string PlayFair::DeCode(string ct)
{
	if (Box_Empty)
		return "The Box is empty!";

	string CipherText = Preprocess(ct);
	string PlainText = "";

	for (int i = 0; i < CipherText.length(); i += 2)
	{
		// Get letter location
		int FirstLetterX = AlphaBox[CipherText[i] - 'A'].x;
		int FirstLetterY = AlphaBox[CipherText[i] - 'A'].y;
		int SecondLetterX = AlphaBox[CipherText[i + 1] - 'A'].x;
		int SecondLetterY = AlphaBox[CipherText[i + 1] - 'A'].y;

		// the same row
		if (FirstLetterY == SecondLetterY)
		{
			PlainText +=
			    Box[FirstLetterY][(FirstLetterX - 1 + Box_Size) % Box_Size];
			PlainText +=
			    Box[SecondLetterY][(SecondLetterX - 1 + Box_Size) % Box_Size];
		}
		else if (FirstLetterX == SecondLetterX) // the same column
		{
			PlainText +=
			    Box[(FirstLetterY - 1 + Box_Size) % Box_Size][FirstLetterX];
			PlainText +=
			    Box[(SecondLetterY - 1 + Box_Size) % Box_Size][SecondLetterX];
		}
		else
		{
			PlainText += Box[SecondLetterY][FirstLetterX];
			PlainText += Box[FirstLetterY][SecondLetterX];
		}
	}

	return PlainText;
}

void PrintBoxMenu()
{
	Menu BoxMenu(25);                 // set width to 25
	BoxMenu.PrintTitle("Box Action"); // title
	BoxMenu.PrintChoice(4, "Generate Box", "Type in Box", "Read Box from file",
	                    "Quit");      // choices
	BoxMenu.PrintFoot();              // foot
	return;
}

void PlayfairBoxAction(PlayFair & pf)
{
	// define constant
	const int GENERATEBOX = 1;
	const int TYPEINBOX = 2;
	const int READFROMFILE = 3;
	const int QUIT = 4;

	int ActionChoice = ErrorValue; // set default value

	while (true)
	{
		std::system("clear");     // clear the screen
		PrintBoxMenu();           // put menu
		std::cin >> ActionChoice; // get choice
		switch (ActionChoice)
		{
			case GENERATEBOX: // generate box and write to file
			{
				pf.GenerateBox();
				pf.WriteBoxToFile();
				return;
			}
			case TYPEINBOX: // read box from keyboard
			{
				pf.TypeinBox();
				pf.WriteBoxToFile();
				return;
			}
			case READFROMFILE:
			{
				string ReadFilePath = ""; // get filepath
				std::cout << "Please input file path:\n";
				std::cin >> ReadFilePath;

				std::ifstream fin(ReadFilePath);

				if (!fin.fail())                        // if file exist
				{
					pf.ReadinBoxFromFile(ReadFilePath); // read box
					pf.WriteBoxToFile();                // write in file
					return;
				}
				else // if doesn't exist
				{
					std::cout << "The file is not existed,please input the "
					             "path after you check.\n"; // waring
					std::getchar();
					std::getchar();
					continue;
				}
			}
			case QUIT:
				return;
			default:
				std::cout << "Please input right choice.\n";
				break;
		}
	}
}

void PlayfairMain(string Operation, string Text, string ActionType)
{
	using std::cout;

	PlayFair playfair;

	const int    OperationSize = 3;
	const string OperationType[OperationSize] = {"encode", "decode", "setbox"};
	const string BoxFilePath = "./PlayFairBox.txt"; // a file to store box

	int Type = ErrorValue;

	// judge whether the operation is right
	for (int i = 0; i < OperationSize; i++)
		if (Operation == OperationType[i])
			Type = i;

	if (Type == ErrorValue)
	{
		cout << ErrorOperation;
		return;
	}

	std::ifstream fin(BoxFilePath);
	if (fin.fail())
	{
		// touch a new file
		std::ofstream fout;
		fout.open(BoxFilePath);
		fout.close();
		playfair.GenerateBox();
		playfair.WriteBoxToFile();
	}
	fin.close();

	playfair.ReadinBoxFromFile(BoxFilePath); // init box from file

	if (ActionType == "true")                // if the last value is true
		PlayfairBoxAction(playfair);         // box action

	// encode and decode
	switch (Type)
	{
		case ENCODE:
			cout << playfair.EnCode(Text) << '\n';
			break;
		case DECODE:
			cout << playfair.DeCode(Text) << '\n';
			break;
	}

	return;
}
