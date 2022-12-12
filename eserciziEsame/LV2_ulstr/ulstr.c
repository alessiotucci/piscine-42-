/// write a program that takes a string and reverse the  case of all its letters, other characters remain unchanged. you must display the result followed by  a new line.
//
#include <unistd.h>
int	main(int argc, char *argv[])
{
	int count;	 // i set a counter
	count = 0;
	char letter; // and i set a char variable.
	
	if(argc == 2)
	{
		while(argv[1][count] != '\0')
		{	
		letter = argv[1][count]; // i assign value to my char varieble that i declared previously

				if(argv[1][count] >=  'A'  && argv[1][count] <= 'Z')
				{
				letter+= 32;
				}
				
				if(argv[1][count] >= 'a' && argv[1][count] <= 'z')
				{
				letter -= 32;
				}
			write(1, &letter, 1);
		count++;  // increment of the counter...
		}
	write(1,  "\n", 1);
	return(0);
	}
}
