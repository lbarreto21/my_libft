/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreto <lbarreto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:32:59 by lbarreto          #+#    #+#             */
/*   Updated: 2024/10/08 15:41:09 by lbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = (char *)malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	ft_memmove(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
/*
int	main(void)
{
	printf("%s", ft_substr("testing", 3, 20));
}
*/
