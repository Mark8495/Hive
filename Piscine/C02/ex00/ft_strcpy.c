/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:03:12 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/11 10:16:57 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strcpy(char *dest, char *src)
{
	int	letter;

	letter = 0;
	while (src[letter] != '\0')
	{
		dest[letter] = src[letter];
		letter++;
	}
	dest[letter] = '\0';
	return (dest);
}
