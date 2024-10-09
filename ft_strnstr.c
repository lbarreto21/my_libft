/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreto <lbarreto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:50:51 by lbarreto          #+#    #+#             */
/*   Updated: 2024/10/08 11:10:05 by lbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_ocurrence(const char *big, const char *little)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (big[i])
	{
		if (little[j] == '\0')
			return (1);
		if (big[i] == little[j])
			j++;
		else
			return (0);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!(little))
		return ((char *)big);
	i = 0;
	while (i < len)
	{
		if (find_ocurrence(big + i, little) == 1)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s", ft_strnstr("abcde", "", 5));
}
*/
