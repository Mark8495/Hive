/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:04:54 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/07 11:05:06 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(int a)
{
	if (a == 1)
	{
		ft_putchar('/');
	}
	else 
	{
		ft_putchar('/');
		a = a - 1;
		while (a > 1)
		{
			ft_putchar('*');
			a--;
		}
		ft_putchar('\\');
	}	
}

void	ft_last_line(int a)
{
	if (a == 1)
	{
		ft_putchar('\\');
	}
	else
	{
		a = a - 1;
		ft_putchar('\\');
		while (a > 1)
		{
			ft_putchar('*');
			a--;
		}
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	ft_middle(int a, int b)
{	
	int	counter;

	b = b - 2;
	while (b > 0)
	{	

		counter = a - 1;
		ft_putchar('*');
		while (counter > 0)
		{
			if(a > 2)
			{
				ft_putchar(' ');
				counter--;
			}
			if (counter == 1)
			{
				ft_putchar('*');
				counter--;
			}
		}		
		b--;
		ft_putchar('\n');
	}
}

void	rush(int a, int b)
{
	ft_line(a);
	ft_putchar('\n');
	if (b > 0)
	{
		ft_middle(a, b);
	}
	if (b > 1)
	{
		ft_last_line(a);
	}
}
