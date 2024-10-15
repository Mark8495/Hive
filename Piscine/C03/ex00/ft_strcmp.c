/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:33:18 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/12 10:57:29 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	letter;

	letter = 0;
	while (s1[letter] != '\0' || s2[letter] != '\0')
	{
		if (s1[letter] == s2[letter])
			letter++;
		else
			return (s1[letter] - s2[letter]);
	}
	return (0);
}
