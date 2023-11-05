/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:12:59 by akretov           #+#    #+#             */
/*   Updated: 2023/11/05 14:13:16 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;

	string = (char *)malloc(ft_strlen(s));
	i = 0;
	while ((i <= len) && (i + len <= ft_strlen(s)))
	{
		string[i] = s[start];
		start++;
		i++;
	}
	string[i] = 0;
	return (string);
}

// int	main(void)
// {
// 	char s[20] = "Just a test";
// 	int start = 4;
// 	int len = 5;

// 	printf("%s\n", ft_substr(s,start,len));
// 	printf("%s\n", s);
// 	return (0);
// }