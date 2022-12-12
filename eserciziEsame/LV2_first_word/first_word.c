// write a program that takes a string and display it's first word followed by a new line.
//
// a word is a section of string delikited by spaces or tab or by the start/ end of the string...
// if the numbers of parameters is not 1  or if there are no words, simply display a new line
//
//
#include <unistd.h>

int	ft_putchar( char j)
{
	write(1, &j ,1);
	return(0);
}

int	main(int argc, char *argv[]) /// we will use argc and argv 
{
	int count;
	count = 0; 
	if ( argc == 2) // argc is equal to 2;
	{
		while (argv[1][count] == ' '|| argv[1][count] == '\t') // i detect space and tab...and i increase the counter 
		{
		count++;
		}
		while (argv[1][count] != ' '|| argv[1][count] != '\t'|| argv[1][count] != '\0') /// if i doont detect spaces or tab..
		{
		ft_putchar(argv[1][count]);
		count++;
		}
	}
	ft_putchar('\n');
	return(0);	
}
