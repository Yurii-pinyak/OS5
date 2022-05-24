#include <stdio.h>
int main(int argc, char* argv[])
{
	int index = 0;
	printf("Program lunched and got the line : ");
	printf("%s\n", argv[0]);
	while (argv[++index] != NULL) {

		printf("%s ", argv[index]);
	}
}
