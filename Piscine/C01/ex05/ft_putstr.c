/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:01:37 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/09 09:53:35 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{	
	int	letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		write(1, &str[letter], 1);
		letter++;
	}
}
