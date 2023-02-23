#include "main.h"

/**
  * _isupper - Verify an uppercase letter 
  * @x: The digit to be verified is 
  * 
  * Return: 1 for the upper case letter, 0 for everything else.
  */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}

