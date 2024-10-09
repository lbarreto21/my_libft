/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreto <lbarreto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:20:26 by lbarreto          #+#    #+#             */
/*   Updated: 2024/10/08 15:29:50 by lbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == 0)
	{
		while (*s)
			s++;
		return ((char *) s);
	}
	else
	{
		while (*s)
		{
			if (c == *s)
				return ((char *) s);
			s++;
		}
		return (NULL);
	}
}
/*
int	main(void)
{
	printf("%s", strchr("abcde", 'c'));
}
*/
