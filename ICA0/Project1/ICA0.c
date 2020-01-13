#include<stdlib.h>
#include<stdio.h>

int main(int argc, char** argv)
{
	int ch;
	printf("Hello From %s\n", argv[0]);
	printf("You submitted %d arguments.\n They were: \n",argc);
	for (int i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);
	exit(EXIT_SUCCESS);
}
