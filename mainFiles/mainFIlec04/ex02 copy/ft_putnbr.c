/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:38:01 by atucci            #+#    #+#             */
/*   Updated: 2022/11/30 19:12:46 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num == -2147483648) // numero massimo che puo essere  contenuto
	{
	ft_putchar('-');
	ft_putchar('2');
	ft_putnbr(147483648);
	}
	else if (num < 0) // se il numero negativo
	{
		ft_putchar('-');
		num = -num;
		ft_putnbr(num);
	}
	else if (num > 9) // se la cifra maggiore di nove fai la divisione
	{
	ft_putnbr(num / 10);
	ft_putnbr(num % 10);
	}
	else 
		ft_putchar(num + 48);
}
int	main(void)
{

	ft_putnbr(-214567);
}
