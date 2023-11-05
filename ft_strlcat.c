/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:02:42 by akretov           #+#    #+#             */
/*   Updated: 2023/11/05 15:07:35 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned char	*dest_1;
	unsigned char	*src_1;
	size_t			j;
	size_t			i;
	size_t			len;

	dest_1 = (unsigned char *)dest;
	src_1 = (unsigned char *)src;
	len = ft_strlen(dest) + ft_strlen(src);
	j = 0;
	i = ft_strlen(dest);
	while (src_1[j] && (i + 1 < size))
	{
		dest_1[i] = src_1[j];
		i++;
		j++;
	}
	dest_1[i] = '\0';
	return (len);
}

// int main(void)
// {
//     char dest[15] = "Hello";
//     char src[] = " World!";

//     size_t result = ft_strlcat(dest, src, sizeof(dest));
//     printf("Mine: %li\n", result);
//     printf("Modified Dest String: %s\n", dest);

//     char dest_1[15] = "Hello";
//     char src_1[] = " World!";
//     size_t result_1 = strlcat(dest_1, src_1, sizeof(dest_1));
//     printf("Original: %li\n", result_1);
// 	printf("Modified Dest String: %s\n", dest_1);
//     return (0);
// }