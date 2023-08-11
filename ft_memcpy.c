/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvets <jvets@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:32:26 by jvets             #+#    #+#             */
/*   Updated: 2023/08/08 16:21:35 by jvets            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*buffer;
	char	*memory;

	buffer = (char *)dest;
	memory = (char *)src;
	while (n-- > 0)
		buffer[n] = memory[n];
	return (buffer);
}