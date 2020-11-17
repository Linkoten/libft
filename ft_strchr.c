/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:13:26 by pbrochar          #+#    #+#             */
/*   Updated: 2020/11/17 19:13:33 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if ((int)s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if ((int)s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
