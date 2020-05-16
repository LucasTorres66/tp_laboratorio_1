typedef struct
{
    int ID;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}Employee;

/** \brief Function that starts the array of structures
 *
 * \param Employee[] -- Array of Employees
 * \param int -- Array length
 * \return void
 *
 */
void initEmployes(Employee[],int);

/** \brief Shows a single structure
 *
 * \param Employee
 * \return void
 *
 */

void Show(Employee);

/** \brief Show a structure array
 *
 * \param Employee[] -- Array of Employees
 * \param int -- Array length
 * \return void
 *
 */
void  printEmployees (Employee[],int);

/** \brief Request data from the user
 *
 * \return Employee
 *
 */
Employee addEmploye();

/** \brief enter the data provided by the user within a structure
 *
 * \param Employee[] -- Array of Employees
 * \param int -- Array length
 * \return int
 *
 */
int addEmployes(Employee[],int);

/** \brief Search free structures

 *
 * \param  Employee[] -- Array of Employees
 * \param int -- Array length
 * \return int
 *
 */
int Free(Employee [], int );

/** \brief  Search Employee for id in array
 *
 * \param Employee[]
 * \param int -- Array length
 * \return int
 *
 */
int findEmployeeById(Employee[], int);

/** \brief options menu to modify structures
 *
 * \param Employee[]
 * \param int-- Array length
 * \return void
 *
 */
void MenuFind(Employee[],int );

/** \brief Delete delete employees
 *
 * \param Employee[]
 * \param int-- Iteraciones
 * \return int
 *
 */
int deleteEmployee(Employee[],int);

/** \brief
 *
 * \param [] Employee
 * \param int-- Array length
 * \return void
 *
 */
void sortEmployees(Employee [],int );

/** \brief
 *
 * \param [] Employee
 * \param int
 * \return float
 *
 */
float average(Employee [], int);
