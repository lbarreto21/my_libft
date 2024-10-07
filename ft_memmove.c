/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreto <lbarreto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:52:17 by lbarreto          #+#    #+#             */
/*   Updated: 2024/10/07 12:43:15 by lbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (dest == NULL || src == NULL)
		return (NULL);
	if (d < s)
		return (memcpy(dest, src, n));
	else
	{
		while (n)
		{
			d[n] = s[n];
			n--;
		}
		return (dest);
	}
}
/*
int	main(void)
{
	char	str[10] = "Start stop";
	
	memmove(str+2, str, 3);
	printf("%s", str);
}
*/
