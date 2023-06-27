#include "public.h"



int GetOperationType(string Operation, const string OperationList[], int Size)
{
	int Value = ErrorValue;

	for (int i = 0; i < Size; i++)
		if (Operation == OperationList[i])
			Value = i;

	return Value;
}