/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:32:30 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/09 12:32:47 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if (str[letter] >= 'a' && str[letter] <= 'z')
		{
			str[letter] -= 32;
		}
		letter++;
	}
	return (str);
}
