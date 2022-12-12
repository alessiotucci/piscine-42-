// write a function that swaps the content of two integers of which are passed as paramaters. your function must be declared as follows
// void ft_swap(int *a , int *b)
#include <unistd.h>
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int bush;
	bush = 6;
	int *point1;
	point1 = & bush;


	int posh;
	posh = 8;
	int *point2;
	point2 = & posh;

	printf("%d" "%d\n", bush , posh);
	ft_swap(point1,point2);
	printf( "%d" "%d"  , bush , posh);

}
