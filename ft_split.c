/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:32:52 by akretov           #+#    #+#             */
/*   Updated: 2023/11/04 12:25:01 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_numb_words(const char *s, char c)
{
	int	i;
	int	count;
	
    i = 0;
    count = 0;
	while (s[i] == c)
			i++;
    while (s[i])
    {
        if (s[i] == c && s[i + 1] != c)
            count++;
        i++;
    }
    return (count + 1); // Adding 1 to account for the last word
}
char    *ft_strndup(const char *s, size_t n)
{
    char    *dest;
    size_t  i;
    i = 0;
    dest = malloc(sizeof(char) * (n + 1));
    if (dest == NULL)
        return (0);
    while (s[i] && i < n)
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char    **ft_split(const char *s, char c)
{
    int     i;
    int     j;
    int     k;
    char    **result;
	
    i = 0;
	j = 0;
    k = 0;
	result = (char **)malloc((ft_numb_words(s, c) + 1) * sizeof(char *)); // +1 is needed for last array to include NULL
	if (result == NULL)
        return (0);
    while (s[i])
    {
        if (s[i] != c)
        {
            j = i;
            while (s[i] && s[i] != c)
                i++;
            result[k] = ft_strndup(s + j, i - j);
			if (result[k] == NULL)
			{
				int	b = 0;
				while (result[b])
					free(result[b++]);
				free(result);
				return(0);
			}
			k++;
        }
        else
            i++;
    }
    result[k] = NULL; // Set the last element to NULL to mark the end of the array
    return (result);
}

int main(void)
{
    char    string[] = "fudsh fdsh fds h fd";
    char    c = ' ';
    char    **result = ft_split(string, c);
	int z = ft_numb_words(string,c);
	int i = 0;
    if  (result)
    {
        while (i < z)
	{
		printf("Word: %s\n", result[i]);
        free(result[i]);
		i++;
	}
        free(result);
    }
    else
        printf("Memory allocation failed.");
    return (0);
}