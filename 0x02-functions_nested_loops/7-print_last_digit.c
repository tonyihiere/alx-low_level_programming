#include "stdio.h"
/**
 * print last digit
 */
int main()
{
	int pld;
	int nld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	putchar(pld + '0');
	return (pld);
}
