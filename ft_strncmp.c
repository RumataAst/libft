/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:33:01 by akretov           #+#    #+#             */
/*   Updated: 2023/11/11 17:43:15 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	printf("My function: %i\n", ft_strncmp("test\200", "test\0", 6));
// 	printf("Original function %i", strncmp("test\200", "test\0", 6));
// 	return (0);
// }