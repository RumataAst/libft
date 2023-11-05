/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:02:12 by akretov           #+#    #+#             */
/*   Updated: 2023/11/05 14:02:27 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	result = (char *)malloc(ft_strlen(s1) + ft_strlen(s2));
	if (result != 0)
	{
		while (s1[i])
		{
			result[i] = (char)s1[i];
			i++;
		}
		while (s2[j])
		{
			result[i] = (char)s2[j];
			i++;
			j++;
		}
		result[i] = '\0';
	}
	return (result);
}

// int     main(void)
// {
// 	char string_1[] = "";
// 	char string_2[] = "Hell";

// 	printf("%s", ft_strjoin (string_1,string_2));
// 	return (0);
// }