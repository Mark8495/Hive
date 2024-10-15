/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:17:18 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/17 15:07:23 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	output;

	output = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		output *= nb;
		nb--;
	}
	return (output);
}
