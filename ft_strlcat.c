/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreto <lbarreto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:49:47 by lbarreto          #+#    #+#             */
/*   Updated: 2024/10/07 14:09:33 by lbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(dst) + ft_strlen((char *)src);
	if (size == 0)
		return (len);
	else
	{
		while (dst[i])
			i++;
		while (*src && i < size - 1)
		{
			dst[i] = *src;
			i++;
			src++;
		}
		dst[i] = '\0';
		return (len);
	}
}
/*
int	main (void)
{
	char	dest[10] = "Hello";
	char	src[] = "World";
	size_t	size = ft_strlcat(dest, src, 10);

	printf("String: %s\n Size: %zu\n", dest, size);
}
*/