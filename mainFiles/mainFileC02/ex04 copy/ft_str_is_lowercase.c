/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:53:36 by atucci            #+#    #+#             */
/*   Updated: 2022/11/28 19:51:25 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 97 && str[count] <= 122)
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
char minuscola[9];
printf( "%d\n" , ft_str_is_lowercase(minuscola));
}

