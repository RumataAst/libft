#include "libft.h"

//changing the void array
// void *ft_memset(void* str, int i, size_t n)
// {
// 	size_t count;
// 	count = 0;
// 	while (count < n)
// 	{
// 		((unsigned char*)str)[count] = (unsigned char)i;
// 		count++;	
// 	}
// 	return (str);
// }



// creating a new pointer and then changing it normal way instead of working with void array
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

int	main(void)
{
	char string[20] = "Good Issam";
	printf("String before memset(): %s \n", string);
	ft_memset(string, '*', 4 * sizeof(string[0]));
	printf("String after memset(): %s \n", string);
  	return (0);
}