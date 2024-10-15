/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:44:09 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/23 14:06:29 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
#include <stdio.h>
int main(void)
{
	int *range;
    	int size = ft_ultimate_range(&range, 3, 8);
	printf("Range size: %d\n", size);
        printf("Range: ");
        int i = 0;
        while (i < size)
        {
            printf("%d ", range[i]);
            i++;
        }
        printf("\n");
        free(range);
}
