#include "main.h"

/**
 * *_strspn - Gets the length of a prefix substr
 * @s: String evaluated
 * @accept: String containing the list of chars to match
 *
 * Return: Number of bytes in intital segment of s
 * which consist only of bytes from accpet
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accpet[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
