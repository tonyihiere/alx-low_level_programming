#include <stdio.h>
/**
 * main - check the code
 */

int main()
{
	int n;

	if (n > 0)
	{
		putchar('+');
		return (1);
		
	} 
	else if (n == 0)
	{
		putchar('0');
		return (0);
	} 
	else 
	{
		putchar('-');
		return (-1);
	}
}
