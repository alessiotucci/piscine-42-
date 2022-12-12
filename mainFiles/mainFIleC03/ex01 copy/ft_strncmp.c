/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:40:23 by atucci            #+#    #+#             */
/*   Updated: 2022/11/30 13:57:25 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strncmp(char *str1, char*str2, unsigned int limit)
{
	unsigned int	count;

	count = 0;
	while ((str1[count] != '\0' || str2[count] != '\0')
		&& count < limit)
	{
		if (str1[count] > str2[count])
		{
			return (1);
		}
		else if (str1[count] < str2[count])
		{
			return (-1);
		}
	count++;
	}
	return (0);
}
 int main()
{ 
	int mylimit;
	mylimit = 9;
	char stringhetta[] = "sei scarso";
	char stringhetta2[] = "sei scarso";
	printf( "%d\n" , ft_strncmp(stringhetta,stringhetta2, mylimit));

}
