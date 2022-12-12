/* Write a program that displays the alphabet, with even
letters in uppercase, and
odd letters in lowercase, followed by a newlin3
 * */
#include <unistd.h> 
int	ft_maff_reversa(void)
{
	int count;
	count = 122;
	
	char tus;
	
	while ( count >= 97)
	{
		if( count % 2 == 0)
		{
		tus = count - 32;
		write(1, &tus, 1);
		}
	write(1, &count, 1);
	count--;
	}
	return(0);
}
int	main()
{
	ft_maff_reversa();
}
