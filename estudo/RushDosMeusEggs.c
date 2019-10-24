#include <unistd.h>
#include "ft_putchar.c"
void    rush00(int nlinhas, int ncolunas){


int coluna;
int linha;

linha=1;
while(linha <= nlinhas){
  coluna =1;
  while(coluna <= ncolunas){
    if((coluna >= 2 && coluna < ncolunas) && (linha == 1 || linha == nlinhas)){
        ft_putchar('-');
    }
    else if((linha > 1 && linha < nlinhas) && (coluna == 1 || coluna == ncolunas)){
        ft_putchar('|');
    }
    else if(linha > 1 && linha < nlinhas && coluna > 1 && coluna < ncolunas){
        ft_putchar(' ');
    }
    else{
      ft_putchar('o');
    }
      coluna++;
    }
      linha++;
      ft_putchar('\n');
  }
}
int main(){
  rush00(5,5);
}
