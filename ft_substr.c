/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 19:12:14 by pbrochar          #+#    #+#             */
/*   Updated: 2020/11/21 15:46:39 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	size_t	retlen;
	size_t	stop;
	char	*dest;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (len >= slen - start)
		retlen = slen - start;
	else
		retlen = len;
	dest = malloc(sizeof(char) * (retlen + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	stop = (size_t)start + len;
	while (start < stop && s[start] && start < slen)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}
