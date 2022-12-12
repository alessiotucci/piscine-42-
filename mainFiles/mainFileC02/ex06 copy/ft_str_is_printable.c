/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:54:56 by atucci            #+#    #+#             */
/*   Updated: 2022/11/28 19:46:22 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 32 && str[count] <= 127)) // ricorntrolla... 
		{
			return(0);
		}
		else
			count++;
	}
	return (1);
}
#include <stdio.h>

int	main()
{
char stampabile[9];
printf( "%d\n" , ft_str_is_printable(stampabile));
}
