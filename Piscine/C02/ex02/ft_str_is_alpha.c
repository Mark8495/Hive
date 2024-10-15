/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:57:33 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/08 19:57:58 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if ((str[letter] >= 'A' && str[letter] <= 'Z')
			|| (str[letter] >= 'a' && str[letter] <= 'z'))
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
