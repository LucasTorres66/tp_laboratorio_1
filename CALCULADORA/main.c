#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

int main()
{
    int respuesta;

    float primerOperando;
    float segundoOperando;
    float suma;
    float resta;
    float multi;
    float division;
    long long int fact1;
    long long int fact2;
    int flag=0;
    int flag2=0;
    int flag3=0;

    do
    {
        respuesta=Menu(flag,flag2,primerOperando,segundoOperando);
        switch(respuesta)

        {
        case 1:
            primerOperando=Operando();
            flag=1;
            break;

        case 2:
            segundoOperando=Operando();
            flag2=1;
            break;
        case 3:
            fflush(stdin);
            suma=Suma(primerOperando,segundoOperando);
            resta=Resta(primerOperando,segundoOperando);
            multi=Multi(primerOperando,segundoOperando);
            fact1=Factorial(primerOperando);
            fact2=Factorial(segundoOperando);
            if(segundoOperando>0)
            {
                division=Division(primerOperando,segundoOperando);
                flag3=1;
            }
                fact1=Factorial(primerOperando);
                fact2=Factorial(segundoOperando);

            break;
        case 4:
            printf("\nLa suma es %f",suma);
            printf("\nLa resta es %f",resta);
            printf("\nLa multiplicacion es %f",multi);
            if(flag3==1)
            {
                printf("\nLa division es : %f",division);
            }
            else
            {
              printf("\nSyntax_Error /no es posible esta division");
            }
            ValidarF(primerOperando,segundoOperando,fact1,fact2);
            break;

        }
        system("pause");
        system("cls");
    }while(respuesta!=5);
    return 0;

}








