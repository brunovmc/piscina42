#include <unistd.h>
#include <stdio.h>

void outside(void);
void four_to_one(void);
void one_start(void);
void two_to_one(void);
void jumper(void);

void outside(void) {
  int count;

  count = 1;
  while (count <= 4)
  {
      colup[count] = *argv[count];
      coldown[count] = *argv[count + 4];
      rowleft[count] = *argv[count + 8];
      rowright[count] = *argv[count + 12];
      count++;
  }
}

void four_to_one(void) {
  int h;
  h = 0;
  while(h < 4)
  {
    if(colup[h + 1] == '4' && coldown[1] == '1')
    {
      answer[0][h] = '1';
      answer[1][h] = '2';
      answer[2][h] = '3';
      answer[3][h] = '4';
    }
    h++;
  }
}

void one_start() {
  int k;
  k = 0;
  while(k < 4)
  {
    if(colup[k+1] == '1')
      answer[k][0] = '4';
    k++;
  }
}

void two_to_one(){
  if(colup[1] == '2' && coldown[1] == '1')
    answer[0][0] = '3';

  if(colup[1] == '3' && coldown[1] == '2')
  {
    answer[2][0] = '4';
  }
}

void loop_lin_col() {
  int i; //linha
  int j; //linha

  i = 0;
  j = 0;
  //aqui falamos da linha
  while(i < 4)
  {
    j = i + 1;
    while(j < 4)
    {
      if(answer[0][i] == answer[0][j])
      {
        // nao funciona!
      }
      j++;
    }
    i++;
  }
  //aqui falamos da coluna
  x = 0;
  z = 0;
  while(x < 4)
  {
    z = x + 1;
    while(z < 4)
    {
      if(answer[x][0] == answer[z][0])
      {
        // nao funciona!
      }
      x++;
    }
    z++;
  }
}

void jumper() {
  int m;

  m = 0;
  while(m < 4)
  {
    if(m == 3)
    printf("\n"); //pula linha quando chegar no ultimo
    m++;
  }
}

int        main(int argc, char *argv[])
{
    char colup[5];
    char coldown[5];
    char rowleft[5];
    char rowright[5];
    char answer[4][4];

    int x; //coluna
    int z; //coluna
    int n; // numero de fora






    if(n > '4' && n < '1') //numeros dados
    {
      // erro nao roda
    }

    else if(colup[1] + coldown[1] <= '5' || colup[1] + coldown[1] >= '3')
    {
      // nao roda roda
      // =====================================================================
    }
    else

    // roda roda do bau

    outside();

    one_start();

    four_to_one();

    two_to_one();

    jumper();



    printf("%d\n", argc);
    printf("%c\n%c\n%c\n%c\n", answer[0][0], answer[1][0], answer[2][0], answer[3][0]);
    return (0);
}
