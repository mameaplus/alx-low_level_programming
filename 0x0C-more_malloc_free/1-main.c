#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for main School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("main ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
