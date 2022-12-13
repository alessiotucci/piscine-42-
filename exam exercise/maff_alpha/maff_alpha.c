// write  a program that display the alphabet with EVEN letter in upper case and  ODD letter in lower case, followed by new line
#include <unistd.h> 
int	ft_maff_alpha(void)
{ 
	// a is  ODD and b is EVEN 
	//  a is 97 in ascii 
	int count;
	count = 'a';
	char temp;

	while ( count <= 'z')
	{
		if (count % 2 == 0)
		{
		temp = count - 32;
		write(1, &temp, 1  ) ; /// i created a variables for this reason 
		}
		else
		{
			write(1, &count, 1);
		}
	count++;
	}
	write(1, "\n", 1);
	return(0);
}
int	main()
{
	ft_maff_alpha();
}
