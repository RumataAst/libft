/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:31:05 by akretov           #+#    #+#             */
/*   Updated: 2023/11/04 12:25:23 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{	
	size_t	i;
	i = 0;


	void *ptr = malloc(nmemb * size);  // Corrected memory allocation
    if (ptr != NULL) {
        // Cast the pointer to the appropriate data type
        char *charPtr = (char *)ptr;
		// Do we really need to multiply by size because we just need number of cells 
        size_t totalSize = nmemb * size;
        // Initialize the allocated memory to zero
		while (i < totalSize)
		{
			charPtr[i] = 0;
			i++;
		}
    }
    return(ptr);
}
