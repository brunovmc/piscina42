#include <stdio.h>
#include <stdlib.h>

void    mallockera(int ptr) {

  char arr[4][4];
  int *prt;
  ptr = malloc (1);
  printf("%d", ptr);


}

int main(void){
    mallockera(1);
    return (0);
}
