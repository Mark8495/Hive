/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:23:00 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/15 15:20:24 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	letter;
	int	result;
	int	sign;

	sign = 1;
	letter = 0;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (str[letter] >= '0' && str[letter] <= '9')
	{
		result = result * 10 + str[letter] - '0';
		letter++;
	}
	return (result * sign);
}

#include <stdio.h>
int main(void)
{
    // Test cases
    char *test1 = "01";             
    char *test2 = "   +0123";            
    char *test3 = "---+--+102040ab567";    
    char *test4 = "42";                  
    char *test5 = "-42"; 
    
    printf("Test 1: \"%s\" -> %d\n", test1, ft_atoi(test1));
    printf("Test 2: \"%s\" -> %d\n", test2, ft_atoi(test2));
    printf("Test 3: \"%s\" -> %d\n", test3, ft_atoi(test3));
    printf("Test 4: \"%s\" -> %d\n", test4, ft_atoi(test4));
    printf("Test 5: \"%s\" -> %d\n", test5, ft_atoi(test5));
}
