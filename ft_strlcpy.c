/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:42:46 by akretov           #+#    #+#             */
/*   Updated: 2023/11/04 12:12:23 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned char	*dest_1;
	unsigned char	*src_1;
	size_t dest_len;
	size_t src_len;
	size_t i;


	dest_1 = (unsigned char *)dest;
	src_1 = (unsigned char *)src;
	// Find the length of dest and src
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);

	// Calculate the available space in dest
	i = dest_len;
	while (src_1[i] && (i + 1 < size))
	{
		dest_1[i] = src_1[i];
		i++;
	}
	
	// Null-terminate the resulting string
	dest_1[i] = '\0';
	// If size is smaller than dest_len, return size + src_len
	return (src_len);
}

int main(void)
{
    char buffer[15] = "";
    char src[] = "123456789101112131415";

    size_t result = ft_strlcpy(buffer, src, sizeof(buffer));
    printf("Mine: %li\n", result);
    printf("Modified Dest String: %s\n", buffer);

    char buffer_1[15] = "";
    char src_1[] = "123456789101112131415";
    size_t result_1 = strlcpy(buffer_1, src_1, sizeof(buffer_1));
    printf("Original: %li\n", result_1);
	printf("Modified Dest String: %s\n", buffer_1);
    return (0);
}