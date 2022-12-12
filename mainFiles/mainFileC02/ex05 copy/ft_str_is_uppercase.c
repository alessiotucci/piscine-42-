/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:54:20 by atucci            #+#    #+#             */
/*   Updated: 2022/11/28 19:49:34 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 65 && str[count] <= 90)
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
char maiuscola[]= "cas";
printf( "%d\n" , ft_str_is_uppercase(maiuscola));
}
