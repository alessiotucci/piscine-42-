/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:40:58 by atucci            #+#    #+#             */
/*   Updated: 2022/11/30 14:01:33 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	county2;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	county2 = 0;
	while (src[county2] != '\0')
	{
	dest[count] = src[county2];
	count++;
	county2++;
	}
	dest[count] = '\0';
	return (dest);
}


#include <stdio.h> 
int main()
{	
	char destinazione[50] = "non si puo";
	char	risorsa[] = " fa";
	printf( "%s\n", ft_strcat(destinazione,risorsa));
}
