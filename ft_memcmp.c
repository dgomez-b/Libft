/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mmemcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:57:07 by dgomez-b          #+#    #+#             */
/*   Updated: 2021/09/15 20:08:30 by dgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

#include <string.h>

/* ******************************* PROTOTIPOS ******************************* */

/* ******************************* LIBRERIAS ******************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((i < n) && (str1[i] == str2[i]))
		i++;
	if (i == n)
		return (0);
	if (str1[i] > str2[i])
		return (str1[i] - str2[i]);
	if (str2[i] > str1[i])
		return (str1[i] - str2[i]);
	return (0);
}
