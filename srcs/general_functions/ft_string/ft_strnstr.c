/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:20:54 by mykman            #+#    #+#             */
/*   Updated: 2022/04/17 22:39:57 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (!haystack || !needle)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && len-- > needle_len - 1)
		if (!ft_memcmp(haystack++, needle, needle_len))
			return ((char *)haystack - 1);
	return (NULL);
}
