/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girizzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:07:00 by girizzi           #+#    #+#             */
/*   Updated: 2024/12/26 15:38:15 by girizzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != 0)
		dest_len++;
	while (src[src_len] != 0)
		src_len++;
	while (size <= dest_len)
	{
		return (size + src_len);
	}
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
