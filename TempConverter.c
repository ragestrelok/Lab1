// TempConverter.cpp : Defines the entry point for the console application.
//
#include <stdio.h>

int tempConvert(int fahr)
{

	float cels = (fahr - 32) * (5 / 9.0);
	return cels;
}

int main()
{
	int fahr = 0;
	while (fahr != 300)
	{
		int cels = tempConvert(fahr);
		printf("Fahrinheits is %i and Celsius is %i \n", fahr, cels);
		fahr += 10;
	}

	return 0;
}

