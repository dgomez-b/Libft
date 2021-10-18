/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 10:27:12 by anonymous         #+#    #+#             */
/*   Updated: 2021/09/30 19:38:58 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************** LIBRERIAS ******************************* */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/* ******************************* PROTOTIPOS ******************************* */

/* ******************************** FUNCIONES ******************************* */

static size_t	ft_cantword(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	while (s[i])
	{
		while ((s[i] == c) && (i < len))
			i++;
		if (i != len)
		{
			while ((s[i] != c) && (i < len))
				i++;
			j++;
		}
	}
	if (j == 0)
		j++;
	return (j);
}

static void	ft_freemat(char **mat)
{
	size_t	i;

	i = 0;
	while (mat[i])
		free(mat[i]);
	free(mat);
}

static size_t	ft_cantchar(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
		if (s[i++] == c)
			j++;
	return (j);
}

static size_t	ft_skipgroup(const char *s, char c, int not)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	if (not == 1)
		while (s[i] != 0 && s[i] != c)
			i++;
	else if (not == 0)
		while (s[i] != 0 && s[i] == c)
			i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**mat;
	size_t	i;
	size_t	j;
	size_t	pos;

	mat = ft_calloc(ft_cantword(s, c) + 1, sizeof(char *));
	if (!s || !mat)
		return (0);
	if (ft_cantchar(s, c) == ft_strlen(s))
		return (mat);
	j = 0;
	i = ft_skipgroup(s, c, 0);
	while (i < ft_strlen(s))
	{
		pos = i;
		i += ft_skipgroup(s + i, c, 1);
		mat[j] = ft_substr(s, pos, i - pos);
		if (!mat[j++])
		{
			ft_freemat(mat);
			return (0);
		}
		i += ft_skipgroup(s + i, c, 0);
	}
	return (mat);
}

// int main(void)
// {
// 	char	*mat;

// 	mat = ft_nsubstr("Hola wenas", 0, 12);
// 	printf("%s\n", mat);
// 	return 0;
// }