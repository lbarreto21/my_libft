/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreto <lbarreto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:49:29 by lbarreto          #+#    #+#             */
/*   Updated: 2024/10/10 14:06:01 by lbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen(s) + 1;
	str = (char *)malloc((len) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = (f)(i , s[i]);
		i++;
	}
	return (str);
}

