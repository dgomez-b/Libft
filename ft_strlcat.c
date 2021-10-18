/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:08:12 by david             #+#    #+#             */
/*   Updated: 2021/10/04 17:25:04 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

/* ******************************* PROTOTIPOS ******************************* */

/* ******************************* FUNCIONES ******************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(dst);
	len2 = ft_strlen(src);
	if (len1 > dstsize)
		len1 = dstsize;
	i = 0;
	while (src[i] && (i + len1 + 1 < dstsize))
	{
		dst[i + len1] = src[i];
		i++;
	}
	if (i != 0)
		dst[i + len1] = 0;
	return (len1 + len2);
}
