#include "main.h"

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (!(*s >= '0' && *s <= '9'))
	{
		if (*s == '-')
		{
			sign = -sign;
			s++;
		}

		else
		{
			s++;
		}
	}

	while (*s >= '0' && *s <= '9')
	{
		num = (num * 10) + (*s - '0');
		s++;
	}

	return (num * sign);
}
