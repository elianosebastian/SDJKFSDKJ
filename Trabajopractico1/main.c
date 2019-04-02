#include <stdio.h>
#include <stdlib.h>
#include "bibliotecatp.h"


int main()
{
 int Opcion ;
 char seguir = 's';
 int flag = 0;
 int flag2 = 0;
 float primerNum;
 float segundoNum;
    do
    {
     Opcion = Menuopciones(" 1.Ingresar 1er Operando\n 2.Ingresar 2do Operando\n 3.Calcular todas las Operaciones\n 4.Informar Resultados\n 5.Salir\n Elija una opcion:");

     switch(Opcion)
      {
        case 1:
        primerNum = primerOperando();
        flag=1;
        break;

        case 2:
        segundoNum = segundoOperando();
        flag = 1
        break;

        case 3:
        system("cls");
        if (flag==1)
        {
         printf("\n **Realizando las operaciones....**")
         flag2=1;
        }else {
               printf("\n ERROR! Primero debe ingresar los dos operadores");
               }
        break;

        case 4:

        break;

        case 5:
        seguir = 'n';
        break;


        default:
            printf("Opcion Incorrecta\n");
            seguir = 'n';
        break;
      }

    system("pause");
    system("cls");

    }while(seguir=='s');

printf("\n El resutlado de la suma es %f",sumaNum);

    return 0;
}
