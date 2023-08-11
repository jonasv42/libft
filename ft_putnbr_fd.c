/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvets <jvets@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:50:32 by jvets             #+#    #+#             */
/*   Updated: 2023/08/08 16:58:20 by jvets            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	static_intlen(long int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		len++;
		nbr *= -1;
	}
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

void	ft_putnbr_fd(int n, int fd)
{
	ssize_t		bytes_written;
	char		*s;
	long int	nbr;

	s = ft_itoa(n);
	nbr = n;
	nbr = static_intlen(nbr);
	bytes_written = write(fd, s, nbr);
	free(s);
}
