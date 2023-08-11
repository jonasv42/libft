/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvets <jvets@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:16:12 by jvets             #+#    #+#             */
/*   Updated: 2023/08/08 16:13:38 by jvets            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc_mem;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > 2147483647 || size > 2147483647 || nmemb * size > 2147483647)
		return (NULL);
	alloc_mem = malloc(nmemb * size);
	return (alloc_mem);
}