/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:13:27 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/12 14:27:11 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int dest_cnt;
	unsigned int src_cnt;
	dest_cnt = 0;
	src_cnt = 0;
	while (dest [dest_cnt] != '\0')
		dest_cnt++;
	while (src[src_cnt] != '\0' &&src_cnt < nb)
	{
		dest[dest_cnt + src_cnt] = src[src_cnt]; src_cnt++;
		dest[dest_cnt + src_cnt] = '\0';
	}
	return (dest);
}

