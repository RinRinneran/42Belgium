/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripelckm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:00:01 by ripelckm          #+#    #+#             */
/*   Updated: 2025/10/29 12:10:46 by ripelckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *) b;
	while (len > 0)
	{
		*(temp++) = (unsigned char) c;
		len--;
	}
	return (b);
}
