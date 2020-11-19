/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 19:12:15 by pbrochar          #+#    #+#             */
/*   Updated: 2020/11/19 19:50:34 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;
	int	a;

	if (!*s2 || !n)
		return ((char *)s1);
	i = 0;
	while (s1[i] && n)
	{
		j = 0;
		if (s1[i] == s2[j])
			a = i;
		while (s1[i] == s2[j++] && n)
		{
			i++;
			n--;
			if (!s2[j])
				return ((char *)&s1[a]);
		}
		if (!s1[i])
			return (NULL);
		i++;
		n--;
	}
	return (NULL);
}
