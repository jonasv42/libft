/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvets <jvets@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:37:50 by jvets             #+#    #+#             */
/*   Updated: 2023/08/08 16:55:51 by jvets            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	buffer;

	buffer = ft_strlen(s);
	if (start > buffer)
	{
		substr = malloc(1);
		substr[0] = '\0';
		return (substr);
	}
	buffer -= start;
	if (buffer < len)
		buffer++;
	else
		buffer = len + 1;
	substr = malloc(buffer);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
