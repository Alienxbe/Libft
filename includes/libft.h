/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:46:33 by mykman            #+#    #+#             */
/*   Updated: 2022/07/22 14:57:48 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <time.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

# include "general_functions/ft_colors.h"
# include "general_functions/ft_ctype.h"
# include "general_functions/ft_list.h"
# include "general_functions/ft_dlist.h"
# include "general_functions/ft_math.h"
# include "general_functions/ft_memory.h"
# include "general_functions/ft_stdio.h"
# include "general_functions/ft_string.h"

/*
** ft_printf
*/
int	ft_printf(const char *format, ...);
int	ft_fprintf(int fd, const char *format, ...);

/*
** get_next_line
*/
int	get_next_line(int fd, char **line);

#endif
