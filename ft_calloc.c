/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:31:05 by akretov           #+#    #+#             */
/*   Updated: 2023/11/05 13:34:26 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*ptr;
	char	*char_ptr;
	size_t	total_size;

	i = 0;
	ptr = malloc(nmemb * size);
	if (ptr)
	{
		char_ptr = (char *)ptr;
		total_size = nmemb * size;
		while (i < total_size)
		{
			char_ptr[i] = 0;
			i++;
		}
	}
	return (ptr);
}
