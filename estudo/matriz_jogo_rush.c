#include <stdio.h>

/*void  matrix()
{
  *(*(matrix + 0) + 1); //col1up
  *(*(matrix + 0) + 2); //col2up
  *(*(matrix + 0) + 3); //col3up
  *(*(matrix + 0) + 4); //col4up
  *(*(matrix + 4) + 1); //col1down
  *(*(matrix + 4) + 2); //col2down
  *(*(matrix + 4) + 3); //col3down
  *(*(matrix + 4) + 4); //col4down
  *(*(matrix + 1) + 0); //row1left
  *(*(matrix + 2) + 0); //row2left
  *(*(matrix + 3) + 0); //row3left
  *(*(matrix + 4) + 0); //row4left
  *(*(matrix + 1) + 4); //row1right
  *(*(matrix + 2) + 4); //row1right
  *(*(matrix + 3) + 4); //row1right
  *(*(matrix + 4) + 4); //row1right  matrix [3][3]
}
*/
void array_builder( int *argv)
{
  int col;
  int row;
  int argv[col][row];
  int matrix[col][row];

  matrix = argv;
  col = 0;
  while ( < col)
  {
    row = 0;
    while( < row)
    {

      printf("%i", matrix);
      row++;
    }
    col++;
  }
}

int main(void){
  array_builder({10, 10, 10});
  return (0);
}
