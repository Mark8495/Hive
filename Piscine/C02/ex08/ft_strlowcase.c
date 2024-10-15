/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:36:13 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/09 12:36:28 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if (str[letter] >= 'A' && str[letter] <= 'Z')
		{
			str[letter] += 32;
		}
		letter++;
	}
	return (str);
}
