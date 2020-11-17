/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:13:27 by pbrochar          #+#    #+#             */
/*   Updated: 2020/11/17 19:13:33 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*dup;

	size = ft_strlen(s) + 1;
	dup = (char*)malloc(sizeof(char) * size);
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, s, size);
	dup[size - 1] = '\0';
	return (dup);
}
