#include "main.h"
/**
 * _islower - detect uppercase and lowercase
 *
 * Description: use _putchar to print
 * @c: collect alphabets
 * Return: (1) if c is lower otherwise (0)
 *
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			lower = 1;
		}
	}
	return (lower);
}
