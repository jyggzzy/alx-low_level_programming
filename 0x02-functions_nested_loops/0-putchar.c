#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar
 * Description: prints _putchar
 * Return: 0 (Success)
 */
int main(void)

{
	char text[9] = "_putchar";

	int g = 0;



	for (g = 0; g < 8; g++)

	{

		_putchar(text[g]);

	}

	_putchar('\n');

	return (0);
}
