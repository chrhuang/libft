/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrhuang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:24:32 by chrhuang          #+#    #+#             */
/*   Updated: 2018/11/21 10:16:07 by chrhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	if ((new = malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < size + 1)
	{
		new[i] = '\0';
		i = i + 1;
	}
	return (new);
}
