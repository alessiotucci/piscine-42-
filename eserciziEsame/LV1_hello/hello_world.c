// write  a program that display hello world followed by a new line
 #include <unistd.h>
int	putstr(char *c)
{
	int count;
	count = 0;
	while ( c[count] != '\0')
	{
		write(1, &c[count] , 1);
		count++;
	}
	write(1, "\n", 1); // folloowed by a new line 
	return(0);
}
int	main()
{
	char stringa[] = "Hello world!";
	putstr(stringa);
}

