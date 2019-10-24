#include <stdio.h>
#include <stdbool.h>

bool	valid_triangle(float a, float b, float c)
{
	if( a <= 0 ||  b <= 0 || c <= 0)
	{
		return false;
	}
	
}

int 	main(void)
{
	valid_triangle(10, 10, 10);
	return (0);
}
