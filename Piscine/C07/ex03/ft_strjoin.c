/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:44:35 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/22 13:29:09 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		letter++;
	}
	return (letter);
}

char	*ft_strcat(char *dest, char *src)
{
	int	src_l;
	int	dest_l;

	dest_l = 0;
	src_l = 0;
	while (dest[dest_l] != '\0')
		dest_l++;
	while (src[src_l] != '\0')
	{
		dest[dest_l] = src[src_l];
		src_l++;
		dest_l++;
	}
	dest[dest_l] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		length;
	int		i;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += ((size - 1) * ft_strlen(sep));
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	i = 0;
	*str = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if ((i + 1) < size)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
