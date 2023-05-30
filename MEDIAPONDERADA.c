#include <stdio.h>
#include <stdlib.h>

main()
{
    float nota1, nota2, nota3;
    
    printf("Insira a nota 1: ");
    scanf("%f", &nota1);

    printf("insira a nota 2: ");
    scanf("%f", &nota2);

    printf("insira a nota 3: ");
    scanf("%f", &nota3);

    float mediafinal= (nota1+nota2+nota3*2)/4;

    printf("A media final do aluno sera de %.2f", mediafinal);

    printf("\n");

    if (mediafinal>=60){
        printf("o aluno esta aprovado");
    }
    else {
        printf("o aluno esta reprovado");
    }


    
    return 0;
}
