#include "public.h"



int GetOperationType(string Operation, const string OperationList[])
{
	int Value = ErrorValue;

	for (int i = 0; i < sizeof(OperationList) / sizeof(string); i++)
		if (Operation == OperationList[i])
			Value = i;

	return Value;
}