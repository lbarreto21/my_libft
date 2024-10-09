/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreto <lbarreto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:35:52 by lbarreto          #+#    #+#             */
/*   Updated: 2024/10/07 15:43:52 by lbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	while (len)
	{
		if (c == s[len])
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s", ft_strrchr("abcde", 'c'));
}
*/
