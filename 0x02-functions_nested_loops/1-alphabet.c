/**
 * Alphabet lowercase
 */

#include <stdio.h>

int main(void)
{
	char alphabet;
	alphabet = 'a';

	_putchar("lowercase alphabet: \n");
	while (alphabet <= 'z')
	{
		_putchar("%c ", alphabet);
		alphabet++;
	}
	fwrite("\n");

	return (0);
}
