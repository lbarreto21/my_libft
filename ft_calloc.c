/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreto <lbarreto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:28:39 by lbarreto          #+#    #+#             */
/*   Updated: 2024/10/08 11:52:29 by lbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (nmemb * size > 2147483647)
		return (NULL);
	else if (nmemb == 0 || size == 0)
	{
		mem = (unsigned char *)malloc(1);
		ft_bzero(mem, 1);
		return ((void *)mem);
	}
	mem = (unsigned char *)malloc(nmemb * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, nmemb * size);
	return ((void *)mem);
}
/*
int	main(void)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = ft_calloc(50, 2);
	while (i < 100)
	{
		printf("%d", (int)ptr[i]);
		i++;
	}
}
*/
