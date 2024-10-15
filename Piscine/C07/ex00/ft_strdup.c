/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:41:30 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/22 12:07:46 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_size;
	int		i;

	i = 0;
	src_size = 0;
	while (src[src_size])
		src_size++;
	dest = (char *)malloc(sizeof(*dest) * (src_size) + 1);
	if (!dest)
		return (NULL);
	while (i < src_size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[src_size] = '\0';
	return (dest);
}