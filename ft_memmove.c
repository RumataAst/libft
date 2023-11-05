/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:46:03 by akretov           #+#    #+#             */
/*   Updated: 2023/11/05 13:46:20 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				j;
	unsigned char	*str1;
	unsigned char	*str2;

	j = 1;
	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dest;
	if (!src && !dest)
		return (0);
	if (src < dest)
	{
		j = -1;
		str1 = str1 + (n - 1);
		str2 = str2 + (n - 1);
	}
	while (n > 0)
	{
		*str2 = *str1;
		str1 = str1 + j;
		str2 = str2 + j;
		n--;
	}
	return (str2);
}

// int main(void)
// {
//   char	str[] = "luck Andrei";
//   ft_memmove (str, str + 2, 6); 
//   printf("My function: %s\n", str);
//   char	str2[] = "luck Andrei";
//   memmove (str2, str2 + 2, 6); 
//   printf("Original: %s\n", str2);
//   return (0);
// }