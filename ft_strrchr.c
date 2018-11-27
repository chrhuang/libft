/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrhuang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:40:54 by chrhuang          #+#    #+#             */
/*   Updated: 2018/11/12 13:48:23 by chrhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*tmp;
	char	*find;

	tmp = (char *)str;
	find = NULL;
	while (*tmp != '\0')
	{
		if (*tmp == c)
			find = tmp;
		tmp = tmp + 1;
	}
	if (*tmp == c)
		find = tmp;
	return (find);
}
