#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;
	const char	*src_1;
	char	*dest_1;

	count = 0;
	dest_1 = dest;
	src_1 = src;
	
	while (count < n)
	{
		dest_1[count] = src_1[count];
		count++;
	}
	return (dest);
}

// int main(void)
// {
//   char source[] = "World";   
//   char destination[] = "Hello ";   
//   /* Printing destination string before memcpy */
//   printf("Original String: %s\n", destination);
//   /* Copies contents of source to destination */
//   ft_memcpy (destination, source, sizeof(source)); 
//   /* Printing destination string after memcpy */
//   printf("Modified String: %s\n", destination);

//   return (0);
// }