/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:53:45 by akretov           #+#    #+#             */
/*   Updated: 2023/11/05 14:01:11 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	s_len;
	int	i;

	s_len = ft_strlen(s);
	i = 0;
	while (i < s_len && s)
	{
		if ((char) c == s[i])
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char string[10] = "Hello";
// 	int c = 'l';
// 	printf("My function %s\n", ft_strchr(string,c));
// 	printf("Original string %s\n", string);
// 	printf("Original function %s", strchr(string,c));
// 	return (0);
// }