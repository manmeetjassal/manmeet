#include<stdlib.h>
#include<stdio.h>

int main(int ArgC, char** ArgV)
{
	int ch;
	printf("Hello From %s\n", ArgV[0]);
	for (ch = 75; ch <= 100; ch++)
	{
		printf("ASCII value= %d, character=%c\n", ch, ch);



	}
	exit(EXIT_SUCCESS);
}
