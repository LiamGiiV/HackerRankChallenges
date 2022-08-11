#pragma once

#include <iostream>
#include <cstdio>
using namespace std;

string integerToEnglish(int input);

void challenge4()
{
	int lowerBoundry = 0;
	int upperBoundry = 0;

	int result = scanf("%d\n%d", &lowerBoundry, &upperBoundry);

	for (int index = lowerBoundry; index <= upperBoundry; index++)
	{
		if (index > 0 && index < 10)
		{
			printf(integerToEnglish(index).c_str());
		}
		else
		{
			if (index % 2 == 0)
			{
				printf("even\n");
			}
			else
			{
				printf("odd\n");
			}
		}
	}
}

string integerToEnglish(int input)
{
	switch (input)
	{
	case 1:
		return "one\n";
	case 2:
		return "two\n";
	case 3:
		return "three\n";
	case 4:
		return "four\n";
	case 5:
		return "five\n";
	case 6: 
		return "six\n";
	case 7:
		return "seven\n";
	case 8:
		return "eight\n";
	case 9:
		return "nine\n";
	}
	return "";
}