#include "public.h"



int GetOperationType(string Operation, const string OperationList[], int Size)
{
	int Value = ErrorValue;

	for (int i = 0; i < Size; i++)
		if (Operation == OperationList[i])
			Value = i;

	return Value;
}

string StringToBinaryString(string str)
{
	using namespace std;

	bitset<64> bstr;
	for (int i = 0; i < 8; i++)
	{
		bitset<8> bits = bitset<8>(str[i]);
		// cout << str[i] << endl;
		for (int j = 0; j < 8; j++)
		{
			bstr[i * 8 + j] = bits[7 - j];
		}
	}
	string s = bstr.to_string();
	// 添加一个翻转操作
	reverse(begin(s), end(s));
	return s;
}

string BinaryStringToString(string bstr)
{
	using namespace std;

	string str = "";
	// 每八位转化成十进制，然后将数字结果转化成字符
	int sum;
	for (int i = 0; i < bstr.size(); i += 8)
	{
		sum = 0;
		for (int j = 0; j < 8; j++)
			if (bstr[i + j] == '1')
				sum = sum * 2 + 1;
			else
				sum = sum * 2;
		str = str + char(sum);
	}
	return str;
}

string operator^(string s1, string s2)
{
	string Result = "";

	if (s1.length() != s2.length())
		return "0";

	for (int i = 0; i < s1.length(); i++)
		Result += ((s1[i] == s2[i]) ? '0' : '1');

	return Result;
}
