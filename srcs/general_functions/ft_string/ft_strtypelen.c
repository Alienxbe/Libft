/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtypelen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:25:36 by maykman           #+#    #+#             */
/*   Updated: 2022/05/06 23:20:33 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strtypelen(const char *s, int (*istype)(int))
{
	size_t	len;

	len = 0;
	if (s)
		while (istype(s[len]))
			len++;
	return (len);
}
