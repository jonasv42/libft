/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvets <jvets@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:34:46 by jvets             #+#    #+#             */
/*   Updated: 2023/08/08 16:46:36 by jvets            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ssize_t	bytes_written;

	while (*s)
	{
		bytes_written = write(fd, s, 1);
		s++;
	}
	bytes_written = write(fd, "\n", 1);
}
