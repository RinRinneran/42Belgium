/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripelckm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:37:08 by ripelckm          #+#    #+#             */
/*   Updated: 2025/10/29 12:44:27 by ripelckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tempd;
	char	*temps;
	size_t	i;

	if (!dst && !src)
		return (dst);
	tempd = (char *) dst;
	temps = (char *) src;
	i = 0;
	if (tempd > temps)
		while (len-- > 0)
			tempd[len] = temps[len];
	else
		while (i++ < len)
			tempd[i] = temps[i];
	return (dst);
}
