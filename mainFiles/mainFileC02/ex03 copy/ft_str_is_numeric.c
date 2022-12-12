/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:52:52 by atucci            #+#    #+#             */
/*   Updated: 2022/11/28 20:35:09 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 48 && str[count] <= 59)
		{
			return (1);
		}	
		else
			return (0);
		count++;
	}
	return (1);
}
#include <stdio.h>

int	main()
{
char numeretta[9];
printf( "%d\n" , ft_str_is_numeric(numeretta));
}

