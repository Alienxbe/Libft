/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:11:37 by mykman            #+#    #+#             */
/*   Updated: 2022/04/16 19:42:58 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	tot;

	tot = nmemb * size;
	if (nmemb != 0 && (tot / nmemb != size || tot % nmemb != 0))
		return (NULL);
	ptr = malloc(tot);
	if (ptr)
		ft_bzero(ptr, tot);
	return (ptr);
}
