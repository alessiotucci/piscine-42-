/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:59:45 by atucci            #+#    #+#             */
/*   Updated: 2022/11/30 17:24:19 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strncat(char *dest, char *src, unsigned int limit)
{
	unsigned int	count;
	unsigned int	county2;

	count = 0;
	county2 = 0;
	while (dest[count] != '\0')
	{
	count++;
	}
	while (src[county2] != '\0' && county2 <= limit)
	{
	dest[count] = src[county2];
	count++;
	county2++;
	}
	return (dest);
}
#include <stdio.h>
int main()
{
	char destinazione[50] = "non si puo";
	char	risorsa[] = " fare";
	int limit = 3;
	printf( "%s\n", ft_strncat(destinazione,risorsa, limit));
}
