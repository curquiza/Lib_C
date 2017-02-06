/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 13:00:48 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/06 13:02:07 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strjoin3 :
** Comme strjoin mais pour 3 chaines de caractères.
*/

char	*ft_strjoin3(char *s1, char *s2, char *s3)
{
	char	*tmp;

	if (!s1 || !s2 || !s3)
		return (NULL);
	if (!(tmp = (char *)malloc(sizeof(*tmp) * (ft_strlen(s1) + ft_strlen(s2)
													+ ft_strlen(s3) + 1))))
		return (NULL);
	ft_strcpy(tmp, s1);
	tmp = tmp + ft_strlen(s1);
	ft_strcpy(tmp, s2);
	tmp = tmp + ft_strlen(s2);
	ft_strcpy(tmp, s3);
	tmp = tmp - ft_strlen(s1) - ft_strlen(s2);
	return (tmp);
}
