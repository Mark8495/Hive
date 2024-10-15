/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:15:50 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/24 11:41:11 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
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

char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_size;
	int		i;

	i = 0;
	src_size = 0;
	while (src[src_size])
		src_size++;
	dest = (char *)malloc(sizeof(*dest) * (src_size + 1));
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(stock))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
