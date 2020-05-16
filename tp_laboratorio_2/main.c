#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"

#define TOTAL 1

int main()
{   Employee ListM[TOTAL];
    initEmployes(ListM,TOTAL);


    char option;

    do
    {
        printf("\n----------------------------------------------------------------------------------------\n");
        printf("\n                        Choose an option\n ");
        printf("\n                    [ 1 ]--> Add an employee");
        printf("\n                    [ 2 ]--> Modify an employee");
        printf("\n                    [ 3 ]--> Delete employee" );
        printf("\n                    [ 4 ]--> Report employee list");
        printf("\n                    [ 5 ]--> Leave program\n ");
        printf("\n----------------------------------------------------------------------------------------\n");

        printf("\nChoose an option : ");
        fflush(stdin);
        scanf("%c",&option);
         while(option != '1' && option != '2' && option != '3' && option != '4' && option != '5')
        {
            printf("\n!! This option is not valid !!\n");
            printf("Choose a valid option: ");
            fflush(stdin);
            scanf("%c", &option);
        }

    switch (option)
 {
        case '1':
            addEmployes( ListM , TOTAL );
            break;
        case '2':
            findEmployeeById( ListM , TOTAL );
            break;
        case '3':
            deleteEmployee( ListM , TOTAL );
            break;

        case '4':
            sortEmployees(ListM, TOTAL );
            printf("\n----------------------------------------------------------------------------------------\n");
            printf("\n%10s %20s %20s %10s %10s\n", "ID", "NAME", "LASTNAME", "SALARY", "SECTOR");
            printEmployees(ListM,TOTAL);
            printf("\n----------------------------------------------------------------------------------------\n");
        break;
 }

    system("pause");
    system("cls");
 }while(option!='5');

return 0;
}













