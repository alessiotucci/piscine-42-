// write a program that takes strings as arguments, and display it's last argumeints .
// if the number of arguments is less  than 1 the program display a new line.

#include <unistd.h> // always include the library that you need...


int	main(int argc,char  *argv[]) // remember that argc is a int, and argv is *[];
{
	int count;
	count = 0 ; // set the counter to minus one
	
	if ( argc > 1) // if argc is greater than one FIRST CONDITION...
	{
		while (argv[argc -1] && argv[argc -1][count] != '\0') // WHILE
		{
			write(1, &argv[argc -1][count], 1);
			count++;
		}
	}
	write(1, "\n", 1);
	return(0);  // remember to return 0 if you use write funtion

}

