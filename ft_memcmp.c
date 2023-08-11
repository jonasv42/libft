/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvets <jvets@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:54:45 by jvets             #+#    #+#             */
/*   Updated: 2023/08/08 16:31:02 by jvets            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*(const char *)s2 != *(const char *)s1)
			return (*(const char *)s2 - *(const char *)s1);
		n--;
		s2++;
		s1++;
	}
	return (0);
}
