/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girizzi <girizzi@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 12:59:11 by girizzi           #+#    #+#             */
/*   Updated: 2024/12/29 17:17:30 by girizzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')
		|| (i >= '0' && i <= '9'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isalnum('4'));
	printf("%d\n", ft_isalnum('H'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum(69));
	printf("%d\n", ft_isalnum(34));
	printf("%d\n", ft_isalnum(160));
}
*/