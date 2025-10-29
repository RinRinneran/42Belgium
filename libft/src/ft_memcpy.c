/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripelckm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:19:46 by ripelckm          #+#    #+#             */
/*   Updated: 2025/10/29 12:26:45 by ripelckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*tempd;
	const unsigned char	*temps;

	if (dest == src || n == 0)
		return (dest);
	*tempd = (unsigned char *)dest;
	*temps = (const unsigned char *src);
	while (n > 0)
	{
		*tempd++ = *temps++;
		n--;
	}
	return (dest);
}
