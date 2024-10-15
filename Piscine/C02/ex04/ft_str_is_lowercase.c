/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:10:16 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/09 12:11:21 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if ((str[letter] >= 'a' && str[letter] <= 'z'))
		{
			letter++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
