#include "class.h"


// 2 
bool duplicate(int numbers[], int length, int *duplication)
{
	if (numbers == nullptr || length <= 0)
		return false;
	for (int i = 0; i < length; ++i)
	{
		if (numbers[i]<0 || numbers[i]>length - 1)
			return false;
	}
	
	for (int i = 0; i < length; ++i)
	{
		while (numbers[i] != i)
		if (numbers[i] == numbers[numbers[i]])
		{
			*duplication = numbers[i];
		    return true;
		}
		// swap numbers[i] and numbers[numbers[i]]
		int temp = numbers[i];
		numbers[i] = numbers[numbers[i]];
		numbers[temp] = temp;
	}
	return false;
}

