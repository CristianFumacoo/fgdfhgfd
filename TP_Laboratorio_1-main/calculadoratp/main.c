#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    char salir='n';
    int opcion;
    int num1;
    int num2;
    int flagPrimerOperando=0;
    int flagSegundoOperando=0;
    int resultadoSuma;
    int resultadoResta;
    int resultadoDiv;
    int resultadoMultiplicacion;
    int resultadoFact1;
    int resultadoFact2;

    do
    {
        system("cls");

        menuParametros(num1, num2, flagPrimerOperando, flagSegundoOperando);
        opcion = menu();

        switch(opcion)
        {
        case 1:
            num1=pedirnumeros(num1);
            flagPrimerOperando=1;
            system("pause");
            break;
        case 2:
            num2=pedirnumeros(num2);
            flagSegundoOperando=1;
            system("pause");
            break;
        case 3:
            //system("cls");
            resultadoSuma=sumar(num1,num2);
            resultadoResta=resta(num1,num2);
            resultadoDiv=dividir(num1,num2,&resultadoDiv);
            resultadoMultiplicacion=multiplicacion(num1,num2);
            resultadoFact1= factorial(num1);
            resultadoFact2=factorial(num2);
            system("pause");
            break;
        case 4:
            printf("El resultado de %d+%d es: %d\n",num1,num2, resultadoSuma);
            printf("El resultado de %d-%d es: %d\n",num1,num2, resultadoResta);
            printf("El resultado de %d/%d es: %d\n",num1,num2, resultadoDiv);
            printf("El resultado de %d*%d es: %d\n",num1,num2, resultadoMultiplicacion);
            printf("El resultado de %d %d es: %d\n",num1,num2, resultadoFact1);
            printf("El resultado de %d %d es: %d\n",num1,num2, resultadoFact2);
            system("pause");
            break;
        case 5:
            printf("Esta seguro que quiere salir? ");
            fflush(stdin);
            scanf("%c", &salir);
            break;
        default:
            printf("Opcion invalida\n");
            system("pause");

        }


    }
    while(salir=='n');





















    return 0;
}

