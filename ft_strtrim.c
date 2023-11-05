/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:09:28 by akretov           #+#    #+#             */
/*   Updated: 2023/11/05 14:12:53 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_contains(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	trimmed_length;

	start = 0;
	end = ft_strlen(s1) - 1;
	i = 0;
	while (s1[start] && ft_contains(s1[start], set))
		start++;
	if (s1[start] == '\0')
	{
		char *result = (char *)malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	while (end > start && ft_contains(s1[end], set))
		end--;
	trimmed_length = end - start + 1;
	char *result = (char *)malloc(trimmed_length + 1);
	if (result != NULL)
	{
		while (i < trimmed_length)
		{
			result[i] = s1[start + i];
			i++;
		}
		result[trimmed_length] = '\0'; 
	}
	return (result);
}

// int main(void)
// {
//     char string_1[] = ".,/";
//     char string_2[] = "..,/.,..Hell./o ,/.";
//     char *trimmed_string = ft_strtrim(string_2, string_1);

//     printf("%s", trimmed_string);

//     // Don't forget to free the allocated memory
//     free(trimmed_string);
//     return (0);
// }
