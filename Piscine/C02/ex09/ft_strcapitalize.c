/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:33:11 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/11 11:36:34 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		letter;
	int		uppercase;

	uppercase = 1;
	letter = 0;
	while (str[letter] != '\0')
	{
		if ((str[letter] >= 'A' && str[letter] <= 'Z')
			|| (str[letter] >= 'a' && str[letter] <= 'z')
			|| (str[letter] >= '0' && str[letter] <= '9'))
		{
			if ((uppercase == 1) && (str[letter] >= 'a' && str[letter] <= 'z'))
				str[letter] -= 32;
			else if ((uppercase == 0)
				&& (str[letter] >= 'A' && str[letter] <= 'Z'))
				str[letter] += 32;
			uppercase = 0;
		}
		else
		{
			uppercase = 1;
		}
		letter++;
	}
	return (str);
}
