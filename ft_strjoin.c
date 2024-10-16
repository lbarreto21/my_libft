/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreto <lbarreto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:41:26 by lbarreto          #+#    #+#             */
/*   Updated: 2024/10/16 11:38:55 by lbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	s1_len;
	size_t	total_len;

	s1_len = ft_strlen(s1);
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = (char *)malloc(total_len * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, s1_len + 1);
	ft_strlcpy(result + s1_len, s2, total_len);
	return (result);
}
/*
int	main(void)
{
	printf("%s", ft_strjoin("tripouille", "42"));
}
*/
