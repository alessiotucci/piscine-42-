/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:39:50 by atucci            #+#    #+#             */
/*   Updated: 2022/11/30 13:53:52 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str1, char *str2)
{
	unsigned int	count;

	count = 0;
	while (str1[count] == str2[count]
		&& (str1[count] != '\0' || str2[count] != '\0'))
	{
	count++;
	}
	return (str1[count] - str2[count]);
}

#include  <stdio.h> 
int	main()
{
	char stringhetta1[]= "non ce la Fai";
	char stringhetta2[]= "non ce la fai";
	printf( "%d\n", ft_strcmp(stringhetta1,stringhetta2));
}

