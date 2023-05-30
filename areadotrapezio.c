#include <stdio.h>
#include <stdlib.h>

main(){
    float basemaior, basemenor, altura;

    printf("insita a base maior: ");
    scanf("%f", &basemaior);

    printf("insira a base menor: ");
    scanf("%f", &basemenor);

    printf("insira a altura: ");
    scanf("%f", &altura);

    float areatotal= ((basemaior+basemenor)*altura)/2;

    if (basemaior<=0){
        printf("o valor da base maior nao pode ser menor ou igual a zero.");
    }   else if (basemenor<=0){
        
        printf("a base menor nao pode ser menor ou igual a zero");

    }   else if (basemaior<basemenor){
        
        printf("a base maior nao pode ser inferior a base menor");

    }   else if (altura<=0){

        printf("a altura nao pode ser menor ou igual a 0");
    }

    

    else {
        printf("a area do trapezio sera de %.2f", areatotal);
    }





}