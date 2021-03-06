/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:47:39 by maykman           #+#    #+#             */
/*   Updated: 2022/05/06 23:17:54 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnchar(char c, int n, int fd)
{
	int	i;

	i = -1;
	while (++i < n)
		ft_putchar_fd(c, fd);
	return (i);
}
