#include <stdio.h>
#include <stdlib.h>
#include "bibliotecatp.h"


int main()
{
 int Opcion;
 char seguir = 's';

    do
    {
     Opcion = Menuopciones("1.Ingresar 1er Operando\n 2.Ingresar 2do Operando\n 3.Calcular todas las Operaciones\n 4.Informar Resultados\n 5.Salir\n Elija una opcion:");

     switch(Opcion)
      {
        case 1:
        printf("FUNCA BIEN");
        break;

        case 2:

        break;

        case 3:

        break;

        case 4:

        break;

        case 5:

        break;


        default:
            printf("Opcion Incorrecta\n");
        break;
      }

    system("pause");
    system("cls");

    }while(seguir=='s');


    return 0;
}
