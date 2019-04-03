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

float suma (float num1 , float num2)
{
    float resultadoSuma;
    resultadoSuma = num1 + num2;
    printf("\n A) Resultado de la Suma");
    return resultadoSuma;
}

float resta (float num1 , float num2)
{
    float resultadoResta;
    resultadoResta = num1 * num2;
    printf("\n B)Resultado de la Resta: ");
    return resultadoResta;
}


float multiplicacion (float num1 , float num2)
{
    float resultadoMulti;
    resultadoMulti = num1 * num2;
    printf("\n C)Resultado de la multiplicacion : ");
    return resultadoMulti;
}

float division( float num1 , float num2)
{
    float Resultadodivision;

    if (num2!=0)
    {
        Resultadodivision=num1/num2;
        printf("\n C)Resultado de la Division : ");
    }
    else
    {
        printf("\n MATH 3RR0R , no se puede dividir por 0");
    }
    return Resultadodivision;
}

float funfactorial(float num1 , float num2)
{
    float Primerfactorial;
    float Segundofactorial;
    float auxiliar_1 =1;
    float auxiliar_2 =1 ;
    if (num1>=0)
    {
        for (Primerfactorial=num1; Primerfactorial>1; Primerfactorial--)
        {
            auxiliar_1=auxiliar_1*Primerfactorial;
        }
        printf("\n D)Resultado del factorial (x) :  %.2f ",Primerfactorial);
    }
    else
        printf("* No se puede factorear negativo\n\n");

    if (num2>=0)
    {
        for (Segundofactorial=num2; Segundofactorial>1; Segundofactorial--)
        {
            auxiliar_2=auxiliar_2*Segundofactorial;
        }

        printf("\n D)Resultado del factorial (x) :  %.2f ",Segundofactorial);
    }
    else
        printf("Numeros negativos no pueden ser factoreados");

    return auxiliar_1;
}
