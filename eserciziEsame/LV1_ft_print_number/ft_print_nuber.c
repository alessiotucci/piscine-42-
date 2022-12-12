// write a function that display all the digits in ascending order. your function mush be declared as follows
// void ft_print_numbers_(void)
#include <unistd.h>
void	ft_print_numbers(void)
{
int count;
count = 48;
while( count <= 57)
	{	 
	write(1, &count, 1);
	count++;
	}
	write(1, "\n", 1);
}
int	main()
{
	ft_print_numbers();
}
