/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:37:00 by atucci            #+#    #+#             */
/*   Updated: 2022/11/30 17:28:27 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
	count++;
	}
	return (count);
}
i
#include <stdio.h>
int	main()
{
	char strong[] = "hello world";
	printf( "%d\n", ft_strlen(strong));
}
