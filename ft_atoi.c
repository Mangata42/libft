/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghaddar <nghaddar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:11:53 by nghaddar          #+#    #+#             */
/*   Updated: 2016/11/09 11:43:39 by nghaddar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	i;
	int		ret;

	i = 0;
	ret = 0;
	if (!(str))
		return (0);
	((str[0] == '-' || str[0] == '+')) ? (i++) : (i = 0);
	while (i < ft_strlen((char *)str))
	{
		if (ft_isdigit(str[i]) == 1)
		{
			ret *= 10;
			ret += str[i] - 48;
		}
		else
			return (ret);
		i++;
	}
	(str[0] == '-') ? (ret *= -1) : (ret *= 1);
	return (ret);
}
