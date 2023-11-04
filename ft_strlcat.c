#include "libft.h"

size_t ft_strlen(const char* str)
{
	size_t i;
	
	i = 0;
	while(str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned char	*dest_1;
	unsigned char	*src_1;
	size_t dest_len;
	size_t src_len;
	size_t j;
	size_t i;


	dest_1 = (unsigned char *)dest;
	src_1 = (unsigned char *)src;
	// Find the length of dest and src
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);

	// Calculate the available space in dest
	j = 0;
	i = dest_len;
	while (src_1[j] && (i + 1 < size))
	{
		dest_1[i] = src_1[j];
		i++;
		j++;
	}
	
	// Null-terminate the resulting string
	dest_1[i] = '\0';
	// If size is smaller than dest_len, return size + src_len

	return (dest_len + src_len);
}

int main(void)
{
    char dest[15] = "Hello";
    char src[] = " World!";

    size_t result = ft_strlcat(dest, src, sizeof(dest));
    printf("Mine: %li\n", result);
    printf("Modified Dest String: %s\n", dest);

    char dest_1[15] = "Hello";
    char src_1[] = " World!";
    size_t result_1 = strlcat(dest_1, src_1, sizeof(dest_1));
    printf("Original: %li\n", result_1);
	printf("Modified Dest String: %s\n", dest_1);
    return (0);
}