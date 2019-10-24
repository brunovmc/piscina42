#include <stdio.h>

char	read_grid(char a, char b, char c, int col, int lin);

int		main(void)
{
	char **arr;

	arr[9][9] = read_grid('.', 'o', 'x', 9, 9);
	printf("%s", arr); 
	return (0);
}
