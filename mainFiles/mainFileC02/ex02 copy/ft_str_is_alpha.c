/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:50:58 by atucci            #+#    #+#             */
/*   Updated: 2022/11/28 20:39:20 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{	
		if ((str[count] >= 97 && str[count] <= 122) || (str[count] >= 65 && str[count] <= 90))
		{
			return (1);
		}
		else
			return (0);
		count++;
	}
	return (2);
}
#include <stdio.h>

int	main(void)
{
	char	stringhetta[9];

	printf("%d\n" , ft_str_is_alpha(stringhetta));
}
