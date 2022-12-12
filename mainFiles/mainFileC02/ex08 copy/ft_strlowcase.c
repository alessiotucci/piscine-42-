/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:56:38 by atucci            #+#    #+#             */
/*   Updated: 2022/11/27 13:19:15 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 65 && str[count] <= 90)
		{
		str[count] = str[count] + 32;
		}
		count++;
	}
	return (str);
}
#include <stdio.h>
int	main()
{
char prima[]= "PROVAAA";
printf( "%s\n" , prima);
printf( "%s\n" , ft_strlowcase(prima));
}
