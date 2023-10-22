/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 18:34:45 by asoursou          #+#    #+#             */
/*   Updated: 2019/07/04 18:45:10 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *d;

	d = dest;
	while (*d)
		d++;
	while (nb-- && *src)
		*d++ = *src++;
	*d = '\0';
	return (dest);
}
