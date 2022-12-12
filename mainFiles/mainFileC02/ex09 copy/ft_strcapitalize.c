/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:57:36 by atucci            #+#    #+#             */
/*   Updated: 2022/11/28 20:36:20 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	count;
	int count2;
	count = 0;
		while (str[count] != '\0')
		{	
		if  (str[count] >= 65 && str[count] <= 90) // se MAIUSCOLE rendi tutto minuscolo 
		{
		str[count] = str[count] + 32;
		}
		
		if (str[count] >= 32 && str[count] <= 47)//| (count == 0)) //se cé punteggiatura, metti il contatore a zero... oppure se inizi al primo carattere in assoluto
		{

			count2=0;
		}
		if ((str[count] >= 97 && str[count] <= 122) && (count2 == 1 || count == 0)) // se E minuscola, e dopo il secondo contatore e 1, quindi dopo un segno di punteggiatura, rendila MAIUSCOLA
		{
			str[count]=str[count] - 32;
		}
		count2++;
		count++;

	}
	return (str);
}
#include <stdio.h>
int	main()
{
	char prima []= " salut,  comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf( "%s\n", prima);
	printf( "%s\n", ft_strcapitalize(prima));
	}
