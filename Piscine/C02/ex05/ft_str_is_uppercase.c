/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:13:59 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/09 12:14:03 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if ((str[letter] >= 'A' && str[letter] <= 'Z'))
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
