// strcpy is also knows as string copy. we need to copy a 	SOURCE into a DESTINATION...
#include <unistd.h> 
int	*ft_putstr(char *str)
{
	int count;
	count = 0;
	while(str[count] != '\0')
	{
		write(1, &str[count], 1);
			count++;
	}
	write(1,  "\n", 1);
	return(0);
}

char	*ft_strcpy( char *dest, char *rsc)
{
	int count;
	count = 0;
	while( dest[count] || rsc[count])
	{
		dest[count] = rsc[count];
		count++;
	}
	return(dest);
}


int main()
{
	char destinaz1[] = "hello";
	char prova2[] = "heylo";
	ft_putstr(destinaz1);
	ft_putstr(prova2);
	ft_putstr(ft_strcpy(destinaz1,prova2));
}
