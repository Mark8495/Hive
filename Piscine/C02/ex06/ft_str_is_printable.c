/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:16:26 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/11 11:52:00 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if ((str[letter] >= 32 && str[letter] <= 126))
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
