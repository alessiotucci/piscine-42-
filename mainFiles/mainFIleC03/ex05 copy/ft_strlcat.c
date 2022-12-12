/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:42:29 by atucci            #+#    #+#             */
/*   Updated: 2022/11/30 16:51:37 by atucci           ###   ########.fr       */
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

unsigned int	ft_strlcat( char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	c2;
	unsigned int	lend;
	unsigned int	lens;

	count = 0;
	c2 = 0;
	while (dest[c2] != '\0')
	{
		c2++;
	}
			lend = c2;
		lens = ft_strlen(src);
	if (size == 0 || size <= lend)
		return (lens + size);
	while (src[count] != '\0' && count < size - lend - 1)
	{
		dest[c2] = src[count];
		count++;
		c2++;
	}
		dest[c2] = '\0';
	return (lend + lens);
}
 #include <stdio.h>
int main()
{
	char rob[] = "hey";
	char ruby[] = "strlcat is a safe alternative to strcat. ";
	printf( "%d\n", ft_strlcat(rob, ruby, 6));
}
