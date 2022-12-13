// this exercise showed up in my previous exam, and i wasnt able to solve it
#include <stdio.h>

int	ft_strlen(char *str)
{
	int count;
	count = 0;
	while ( str[count])
	{
	count++;
	}
	return(count);
}

char *ft_strrev(char *str)
{
	int count;
	count = 0;
	char temp;		// i declared a temporary char variables
	int len;
	len = ft_strlen(str) - 1;

	while(len > count) // while the lenght of the string is greater than  the counter...
	{
	temp = str[count];  // little swap here using the temp char
	str[count] = str[len];
	str[len] = temp;
	
	count++;
	len--; 
	}
return(str);
}

int main()
{
	char boh[5] = "ciao";
	printf( "%s\n", boh);
   printf( "%s\n", ft_strrev(boh));
}   

