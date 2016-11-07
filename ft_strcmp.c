/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:52:00 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/07 19:01:09 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	if (!(s1) || !(s2))
		return (0);
	i = 0;
	while ((s1[i] != 0 && s2[i] != 0) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
