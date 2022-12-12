/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:55:42 by atucci            #+#    #+#             */
/*   Updated: 2022/11/27 12:50:39 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 97 && str[count] <= 122)
		{
		str[count] = str[count] - 32;
		}
		count++;
	}
	return (str);
}
#include <stdio.h>

int	main()
{
char prima[]= "CIffAAffFG";
printf( "%s\n" , prima);
printf( "%s\n" , ft_strupcase(prima));
}
