//write a program that display all digits in descending order, followed by new line.
#include <unistd.h> 
int	ft_countdown(void)
{
	int count;
	count = 57;
	while ( count >= 48)
	{
		write(1, &count, 1);
		count--;
	}
	write(1, "\n", 1); // he wants a new line at the end.. 
	return(0);
}

int	main() // is a proogram so we need to include main...
{
	ft_countdown();
}
