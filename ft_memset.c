/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girizzi <girizzi@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 14:42:48 by girizzi           #+#    #+#             */
/*   Updated: 2024/12/31 15:03:48 by girizzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *dest, int c, size_t count)
{
	char	*buffer;

	buffer = (char *)dest;
	while (len > 0)
	{
		buffer[len - 1] = c;
		len--;
	}
	return (dest);
}
