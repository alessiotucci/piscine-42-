/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:50:11 by atucci            #+#    #+#             */
/*   Updated: 2022/11/28 20:38:25 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *rsc, char *dstn, unsigned int limit )
{
	unsigned int	count;

	count = 0;
	while (dstn[count] != '\0' && count < limit)
	{
	dstn[count] = rsc[count];
	count++;
	//limit--; controllare manca un pezzo...
	}	
	dstn[count] = '\0';
	return (dstn);
}
#include <stdio.h>

int	main()
{
	char risorsa[]= "qual";
	char destinazione[] = "abcd";
	unsigned int mylimite;
	mylimite =2;
	printf("%s\n" "%s\n" "%d", risorsa, destinazione, mylimite);
	ft_strncpy(risorsa, destinazione, mylimite);
	printf("\n%s\n" "%s\n" "%d", risorsa, destinazione, mylimite);
}
