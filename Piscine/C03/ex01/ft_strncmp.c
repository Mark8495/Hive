/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:36:51 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/11 16:49:18 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	letter;

	letter = 0;
	while ((s1[letter] != '\0' || s2[letter] != '\0') && letter < n)
	{
		if (s1[letter] == s2[letter])
			letter++;
		else
			return (s1[letter] - s2[letter]);
	}
	return (0);
}
