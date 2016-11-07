/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:39:57 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/07 15:39:10 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int y;

	i = 0;
	y = ft_strlen(s1);
	if (!(s1) || !(s2))
		return (NULL);
	while (s2[i] != '\0')
	{
		s1[y + i] = s2[i];
		i++;
	}
	s1[y + i] = '\0';
	return (s1);
}