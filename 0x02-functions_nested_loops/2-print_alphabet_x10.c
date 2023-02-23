/**
 * Alphabets ten times
 * in lowercase
 */

#include <stdio.h>

int main(void)
{
	int n, aten;

	aten = 0;

	while (aten < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			putchar(n);
		}
		aten++;
		putchar('\n');
	}
}
