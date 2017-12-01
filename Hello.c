/*
 * This is a test program
 *
**/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define TRUE (1)
#define FALSE (0)

void Output_random_number(void)
{
	unsigned int max;

	srand((unsigned int)clock());
	printf("Input Maximal number:");
	scanf("%d", &max);
	printf("Output random number: %d\n", rand() % max);
}

void Output_string_length(void)
{
	char input_str[1024];

	printf("Input string:");
	scanf("%s", input_str);
//	printf("Output string: %s\n", input_str);
	printf("Output string length: %d\n", (unsigned int)strlen(input_str));
}

int main(void)
{
	printf("Hello World\n");

	Output_random_number();

	Output_string_length();

	printf("Good Bye!!!\n");

	return TRUE;
}

