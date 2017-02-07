/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdeldup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 18:03:06 by curquiza          #+#    #+#             */
/*   Updated: 2016/12/28 18:03:33 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdeldup(char **src)
{
	char	*tmp;

	if (!src)
		return (NULL);
	tmp = ft_strdup(*src);
	ft_strdel(src);
	return (tmp);
}
