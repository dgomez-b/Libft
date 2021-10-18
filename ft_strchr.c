/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-b <dgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:28:10 by dgomez-b          #+#    #+#             */
/*   Updated: 2021/10/14 20:20:25 by dgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

#include <string.h>
#include "libft.h"

/* ******************************* PROTOTIPOS ******************************* */

/* ******************************* LIBRERIAS ******************************** */

// char	*ft_strchr(const char *s, int c)
// {
// 	int	i;

// 	i = 0;
// 	if (!s)
// 		return (0);
// 	while ((s[i] != '\0') && (s[i] != c))
// 		i++;
// 	if ((s[i] == '\0') && (c != '\0'))
// 		return (0); 
// 	return ((char *)(s + i));
// }

char	*ft_strchr(const char *s, int c)
{
	size_t			i;

	if (!c)
		return ((char *)(s + ft_strlen(s)));
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}
