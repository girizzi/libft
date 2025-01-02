/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: girizzi <girizzi@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:43:53 by girizzi           #+#    #+#             */
/*   Updated: 2025/01/02 18:28:34 by girizzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t size)
{
	size_t	stop;
	size_t	len;
	char	*new;

	if (!s)
		return (0);
	len = ft_strlen(s);
	stop = 0;
	if (start < len)
		stop = len - start;
	if (stop > size)
		stop = size;
	new = (char *)malloc((stop + 1) * sizeof(char));
	if (!new)
		return (0);
	ft_strlcpy(new, s + start, stop + 1);
	return (new);
}
