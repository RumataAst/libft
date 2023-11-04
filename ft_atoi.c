#include "libft.h"


// incorrect, adjust according to the man

int	ft_atoi(const char *str)
{
	int	minus;
	int	number;

	minus = 0;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		str++;
	}
	if (!(minus % 2))
		return (number);
	return (-number);
}