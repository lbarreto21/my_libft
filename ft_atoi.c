/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreto <lbarreto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:10:35 by lbarreto          #+#    #+#             */
/*   Updated: 2024/10/08 11:28:04 by lbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int		nbr;
	int		i;
	int		n;

	nbr = 0;
	i = 0;
	n = 1;
	while (nptr[i] <= 32 || nptr[i] == 127)
		i++;
	if (nptr[i] == '-')
	{
		n = -n;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = (nbr * 10) + (nptr[i] - '0');
		i++;
	}
	return (nbr * n);
}
/*
#include "libft.h"

int	main (void)
{
	printf("My Atoi: %d\n", ft_atoi("  - 1 2 3"));
	printf("Original Atoi: %d", atoi("  - 1 2 3"));
}
*/
