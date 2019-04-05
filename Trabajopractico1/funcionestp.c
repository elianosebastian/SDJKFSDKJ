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
    printf("Ingresar 1er Operando : ");
    scanf("%f",&x);
    return x;
}

float segundoOperando()
{
    float y;
    printf("Ingresar 2do Operando : ");
    scanf("%f",&y);
    return y;
}

float suma (float num1 , float num2)
{
    float resultadoSuma;
    resultadoSuma = num1 + num2;
    printf("\n A) Resultado de la Suma %.2f ",resultadoSuma);
    return resultadoSuma;
}

float resta (float num1 , float num2)
{
    float resultadoResta;
    resultadoResta = num1 * num2;
    printf("\n B)Resultado de la Resta:%.2f ",resultadoResta);
    return resultadoResta;
}


float multiplicacion (float num1 , float num2)
{
    float resultadoMulti;
    resultadoMulti = num1 * num2;
    printf("\n C)Resultado de la multiplicacion : %.2f  ",resultadoMulti);
    return resultadoMulti;
}

float division( float num1 , float num2)
{
    float Resultadodivision;

    if (num2!=0)
    {
        Resultadodivision=num1/num2;
        printf("\n C)Resultado de la Division : %.2f  ",Resultadodivision);
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
    float auxiliar_1 ;
    float auxiliar_2 ;
    if (num1==0 || num1==1)
    {
        auxiliar_1 = 1;
        printf("\n D)Resultado del factorial (x) :  %.2f ",auxiliar_1);
    }
        else if (num1<0)
        {
         printf("\n No se puede factorear negativo");
        } else {
                 Primerfactorial=num1*num1-1;
                 printf("\n D)Resultado del factorial (x) :  %.2f ",Primerfactorial);
                }

    if (num2==0 || num2==1)
    {
        auxiliar_2 = 1;
        printf("\n D)Resultado del factorial (y) :  %.2f ",auxiliar_2);
    }
        else if (num1<0)
        {
         printf("\n No se puede factorear negativo");
        } else {
                 Segundofactorial=num2*num2-1;
                 printf("\n D)Resultado del factorial (y) :  %.2f \n ",Segundofactorial);
                }
return Primerfactorial;

}
