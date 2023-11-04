/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:33:01 by akretov           #+#    #+#             */
/*   Updated: 2023/11/04 12:12:49 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strncmp(const char *s1,const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	const char string_1[] = "He1llo";
	const char string_2[] = "He2ll";
	printf("My function: %i\n", ft_strncmp(string_1,string_2,10));
	printf("Original function %i", strncmp(string_1,string_2,10));

	return (0);
}