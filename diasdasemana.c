#include <stdio.h>
#include <stdlib.h>

main(){

    int dia;

    printf("digite um numero: ");
    scanf("%d", &dia);

switch (dia) {
  case 1:
    printf("domingo");
    break;
  case 2:
    printf("segunda");
    break;
  case 3:
    printf("terca");
    break;
  case 4:
    printf("quarta");
    break;
  case 5:
    printf("quinta");
    break;
  case 6:
    printf("sexta");
    break;
  case 7:
    printf("sabado");
    break;
}


}
