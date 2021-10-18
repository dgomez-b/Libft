/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:54:31 by david             #+#    #+#             */
/*   Updated: 2021/10/14 20:54:39 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************** LIBRERIAS ******************************* */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* ******************************* PROTOTIPOS ******************************* */

/* ******************************** FUNCIONES ******************************* */

static size_t	ft_intsize(int n)
{
	size_t	i;
	size_t	j;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		n = -1 * (n / 10);
		i++;
		j = 1;
	}
	else
		j = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i + j);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	i;

	i = ft_intsize(n);
	s = ft_calloc(i + 1, sizeof(char));
	if (!s)
		return (0);
	if (n == 0)
	{
		*s = '0';
		return (s);
	}
	if (n < 0)
	{
		*s = '-';
		s[--i] = '0' + ((n % 10) * -1);
		n = (n / 10) * -1;
	}
	while (n > 0)
	{
		s[--i] = '0' + (n % 10);
		n /= 10;
	}
	return (s);
}
