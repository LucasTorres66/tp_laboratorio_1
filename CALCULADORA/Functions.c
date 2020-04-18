#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"
float Menu(int flag, int flag2,float primerOperando,float segundoOperando)
{
    int respuesta;
     printf("\n Elija una opcion :");
        if(flag==0)
        {
            printf("\n 1. Ingresar primer operando :");
        }
        else
        {
            printf("\n 1. Ingresar primer operando : A = %f",primerOperando);
        }
        if(flag2==0)
        {
            printf("\n 2. Ingresar segundo operando :");
        }
        else
        {
            printf("\n 2. Ingresar segundo operando : B = %f",segundoOperando);
        }
        printf("\n 3. Calcular todas las operaciones");
        printf("\n 4. Informar todos los resultados");
        printf("\n 5. Salir");
        printf("\n Elija una opcion: ");
        scanf("%d",&respuesta);
        return respuesta;
}

float Operando()
{
float num;
printf("Ingrese un Operando: ");
fflush(stdin);
scanf("%f",&num);
return num;
}
float Suma(float primerOperando,float segundoOperando)
{   float sum;
    sum=primerOperando+segundoOperando;
    return sum;
}
float Resta(float primerOperando,float segundoOperando)
{
    float res;
    res=primerOperando-segundoOperando;
    return res;
}
float Multi(float primerOperando,float segundoOperando)
{
    float mult;
    mult=primerOperando*segundoOperando;
    return mult;
}
float Division(float primerOperando,float segundoOperando)
{
    float div;
    div=primerOperando/segundoOperando;
    return div;
}
long long int Factorial (float num)
{
    long long int factorial = 1;
    int cont;

    for (cont = num; cont > 0; cont--)
    {
        factorial = factorial * cont;
    }

    return factorial;
}
void ValidarF( float primerOperando, float segundoOperando,int fact1, int fact2)
{
    if(primerOperando > 0 && segundoOperando > 0)
    {
        printf("\nEl factorial de %d es: %d y el factorial de %d es: %d\n\n\n", (int)primerOperando, fact1, (int)segundoOperando, fact2);
    }
    else if(primerOperando < 0 && segundoOperando < 0)
    {
        printf("\nEl factorial de %d es: Numero invalido y el factorial de %d es: Numero invalido\n\n\n",(int)primerOperando,(int)segundoOperando);
    }
    else if(primerOperando < 0)
    {
        printf("\nEl factorial de %d es: Numero invalido y el factorial de %d es: %d\n\n\n",(int)primerOperando,(int)segundoOperando, fact2);
    }
    else
    {
        printf("\nEl factorial de %d es: %d y el factorial de %d es: Numero invalido \n\n\n", (int)primerOperando, fact1, (int)segundoOperando);
    }
}
