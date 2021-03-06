/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctourret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 15:59:57 by ctourret          #+#    #+#             */
/*   Updated: 2016/11/11 16:44:31 by ctourret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmp_d;
	unsigned char *tmp_s;

	tmp_d = (unsigned char *)dst;
	tmp_s = (unsigned char *)src;
	if (tmp_d == tmp_s)
		return (dst);
	else if (tmp_s < tmp_d)
	{
		tmp_s = tmp_s + len - 1;
		tmp_d = tmp_d + len - 1;
		while (len > 0)
		{
			*tmp_d-- = *tmp_s--;
			len--;
		}
		return (dst);
	}
	else
		while (len > 0)
		{
			*tmp_d++ = *tmp_s++;
			len--;
		}
	return (dst);
}
