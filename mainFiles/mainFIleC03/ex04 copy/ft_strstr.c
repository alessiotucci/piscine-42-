/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:41:58 by atucci            #+#    #+#             */
/*   Updated: 2022/11/30 14:03:28 by atucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *main, char *sub)
{
	int	count;
	int	fu;

	count = 0;
	if (sub[0] == '\0')
	{
		return (main);
	}
	while (main[count] != '\0')
	{
		fu = 0;
		while (main[count + fu] == sub[fu] && main[count + fu] != '\0')
		{
			if (sub[fu + 1] == '\0')
				return (&main[count]);
		fu++;
		}
		count++;
	}
	return (0);
}
#include  <stdio.h>
int main()
{
    char myPagliaio[] = "questo e il mio momento";
    char  myAgo[] = "il";
    printf( "%s\n" "%s\n" "%s\n",  myPagliaio ,myAgo, ft_strstr(myPagliaio, myAgo));
}
