#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#include <string.h>
#define TRUE 1
#define FALSE 0


void initEmployes(Employee List[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {


        strcpy(List[i].name, "");
        strcpy(List[i].lastName, "");
        List[i].salary= 0;
        List[i].sector= 0;
        List[i].isEmpty= TRUE;
    }
}
void Show(Employee List)
{
     printf("%10d %20s %20s %10.2f %10d\n", List.ID,
                                               List.name,
                                               List.lastName,
                                               List.salary,
                                               List.sector);

}

void  printEmployees (Employee List[],int len)
{

    int i;
    for(i=0;i<len;i++)
    {
        if(List[i].isEmpty == FALSE)
        {
            List[i].ID=i+1;
            Show( List [i]);
        }
    }

}
 Employee addEmploye()
{
    Employee List;
    List.isEmpty=FALSE;
    //List.ID=i++;;

    printf(" -- Write the Name : ");
    fflush(stdin);
    gets(List.name);

     printf(" -- Write the Last Name : ");
    fflush(stdin);
    gets(List.lastName);
do
    {
    printf (" -- Write the Salary : ");
    fflush(stdin);
    scanf("%f",&List.salary);
    }while(List.salary<0);

    printf (" -- Write the Sector : ");
    fflush(stdin);
    scanf("%d",&List.sector);




    return List;
}
int addEmployes(Employee List[],int len)
{
     int i;
    i= Free(List,len);
    if(i != -1)
    {
        List[i]= addEmploye();
    }
    else
    {
        printf("Is not possible add more employees");
    }
            return i;
}
int Free(Employee List[], int len)
{
    int i;
    int index= -1;

    for(i=0; i<len; i++)
    {
        if(List[i].isEmpty == TRUE)
        {
            index= i;
            break;
        }
    }
    return index;
}

int findEmployeeById(Employee List[], int len)
{
    int i;
    int found= 0;


    int enteredID;

    printf(" \n Write the id  ");
    fflush(stdin);
    scanf("%d",&enteredID);

    for(i=0; i<len; i++)
    {
        if(List[i].ID==enteredID)
        {
            MenuFind(List,i);
            found= 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("The id does not exist");
    }

    return 0;
}


void MenuFind(Employee List[],int i)
{
    char option;
    do
            {
                printf("\nWhat do you want to modify?\n");

                printf("\n[ 1 ]--> Name ");
                printf("\n[ 2 ]--> Last Name ");
                printf("\n[ 3 ]--> Salary ");
                printf("\n[ 4 ]--> Sector ");
                printf("\n[ 5 ]--> Back to Main Menu");
                printf("\nChoose a Option : ");
                fflush(stdin);
                scanf("%c",&option);

                while(option != '1' && option != '2' && option != '3' && option != '4' && option != '5')
                {
                        printf("\nThis option is not valid.\n");
                        printf("Choose a valid option: ");
                        fflush(stdin);
                        scanf("%c", &option);
                }
                switch(option)
                {
                    case '1':
                        printf("Write a new Name : ");
                        fflush(stdin);
                        gets(List[i].name);
                        break;

                    case '2':
                        printf("Write a new Las Name : ");
                        fflush(stdin);
                        gets(List[i].lastName);
                        break;

                    case '3':
                        printf("Ingrese el nuevo Salario: ");
                        fflush(stdin);
                        scanf("%f", &List[i].salary);
                        break;

                    case '4':
                        printf("Ingrese el nuevo Salario: ");
                        fflush(stdin);
                        scanf("%d", &List[i].sector);
                        break;
                }
                system("pause");
                system("cls");
            }while( option!='5');
}
int deleteEmployee(Employee List[],int len)
{
    int i;
    int found= 0;

    int enteredID;

     printf(" \n Write the id  ");
    fflush(stdin);
    scanf("%d",&enteredID);


    for(i=0; i<len; i++)
    {
        if(List[i].ID==enteredID)
        {
            List[i].isEmpty= TRUE;
            found= 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("The id does not exist");
    }

    return 0;
}
void sortEmployees(Employee listado[], int tam)
{
    int i;
    int j;
    Employee auxEmploye;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listado[i].lastName,listado[j].lastName)>0)
            {
               auxEmploye  =  listado[i];
               listado[i] = listado[j];
               listado[j] = auxEmploye;
            }

        }
    }
}



