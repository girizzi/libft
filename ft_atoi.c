/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girizzi <girizzi@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:31:43 by girizzi           #+#    #+#             */
/*   Updated: 2025/01/02 19:37:55 by girizzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	nminus;

	i = 0;
	n = 0;
	nminus = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nminus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		n = n * 10 + (str[i++] - '0');
	return (n * nminus);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("-42ab567"));
	printf("%d\n", ft_atoi("a42"));
	printf("%d\n", ft_atoi("-042e00"));
	printf("%d\n", ft_atoi("4242%33"));
}
*/