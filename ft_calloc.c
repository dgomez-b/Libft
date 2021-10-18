/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-b <dgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:39:40 by dgomez-b          #+#    #+#             */
/*   Updated: 2021/09/20 14:21:04 by dgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

/* ******************************* PROTOTIPOS ******************************* */

/* ******************************* LIBRERIAS ******************************** */

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (count == 0)
		count++;
	if (size == 0)
		size = sizeof(char);
	res = malloc(size * count);
	if (!res)
		return (NULL);
	ft_bzero(res, (count * size));
	return (res);
}
