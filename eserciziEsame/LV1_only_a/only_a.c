// write a program that display 'a' as the standard output
#include <unistd.h>
int	ft_only_a(void)
{
	write(1,  "a", 1);
	return(0);
}
int	main()
{
	ft_only_a();
}
