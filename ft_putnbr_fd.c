/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvets <jvets@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:50:32 by jvets             #+#    #+#             */
/*   Updated: 2023/08/11 20:25:49 by jvets            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nbr > 9)
	{
		ft_putnbr_fd((int)(nbr / 10), fd);
		ft_putchar_fd(nbr % 10 + '0', fd);
	}
	else
	{
		ft_putchar_fd(nbr % 10 + '0', fd);
	}
}
