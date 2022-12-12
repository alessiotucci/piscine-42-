/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:37:23 by atucci            #+#    #+#             */
/*   Updated: 2022/11/30 17:34:14 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	ft_putstr(char *c)
{
	int count;

	count = 0;
	while( c[count] != '\0')
	{
		write(1, &c[count], 2);
		c++;
	}
	return(0);
}
int main()
{
	char prova[] = "hello world";
	ft_putstr(prova);
}
