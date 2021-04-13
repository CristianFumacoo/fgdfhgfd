#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
int pedirnumeros(int num)
{

    printf("Ingrese un numero ");
    scanf("%d", &num);

    return num;
}

int sumar(int a, int b)
{
    int resultado;

    resultado= a + b;

    return resultado;
}

int dividir (int a, int b, float* resultado)
{
    int respuestaOk=0;

    if( b != 0 && resultado != NULL)
    {
        *resultado= (float) a/b;
        respuestaOk=1;
    }

    return respuestaOk;

}

int resta(int a, int b)
{
    int resultado;

    resultado=a-b;

    return resultado;

}

int multiplicacion (int a, int b)
{

    int resultado;

    resultado= a*b;

    return resultado;

}

float factorial(int num)
{
    float resultado = 1;

    for (int i = 1; i <= num; i++)
    {
        resultado = resultado * i;
    }

    return (float) resultado;
}

int menu()
{
    int opcion;

    printf("3.Calcular todas las operaciones\n");
    printf("  a.Calcular la suma (A+B)\n");
    printf("  b.Calcular la resta (A-B)\n");
    printf("  c.Calcular la division (A/B)\n");
    printf("  d.Calcular la multiplicacion (A*B)\n");
    printf("  e.Calcular el factorial (A! y B!)\n");
    printf("4.Informar resultados\n");
    printf("  a.El resultado de A+B es:\n");
    printf("  b.El resultado de A-B es:\n");
    printf("  c.El resultado de A/B es:\n");
    printf("  d.El resultado de (A*B) es:\n");
    printf("  e.El factorial de A es: r1 y el factorial de B es: r2\n");
    printf("5.Salir\n");
    printf("\nIngrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}


void menuParametros(int a, int b, int flagPrimerOperando, int flagSegundoOperando)
{
    if(flagPrimerOperando==0)
    {
        printf("1.Ingrese primer operando (A=x)\n");
    }
    else
    {
        printf("1.Ingresar primer operando (A=%d)\n", a);
    }
    if(flagSegundoOperando==0)
    {
        printf("2.Ingrese segundo operando (B=y)\n");
    }
    else
    {
        printf("2.Ingrese segundo operando (B=%d)\n", b);
    }
}
