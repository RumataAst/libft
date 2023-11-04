#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t count;
	count = 0;
	while (count < n)
		((unsigned char*)s)[count++] = '\0';
	return (s);
}

int	main(void)
{
	char str[20] = "Hello World";
	char str1[20] = "Hello World";

	bzero(str, 2);
	printf("String after bzero(): %s \n", str);
	ft_bzero(str1,2);
	printf("String after ft_bzero(): %s \n", str1);
	return(0);
}