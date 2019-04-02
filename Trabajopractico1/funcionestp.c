#include <stdio.h>
#include <stdlib.h>
#include "bibliotecatp.h"
int Menuopciones(char texto[])
{
     int Opcion;
     printf("%s",texto);
     scanf("%d",&Opcion);
     return Opcion;
}
float primerOperando()
{
    float x;
    printf("Ingresar 1er Operando");
    scanf("%f",&x);
    return x;
}

float segundoOperando()
{
    float y;
    printf("Ingresar 2do Operando");
    scanf("%f",&y);
    return y;
}

float suma (float y , float x)
{
    float resultado;
    resultado = x + y;
    scanf("%f",&resultado);
    return resultado;


}
