
typedef struct
{
    int id;
    char nombre[128];
    char empleo[128];
    int edad;
    int horasTrabajadas;
    float sueldo;

}Employee;

Employee* employee_new();
Employee* employee_newParametros(char* idStr,char* nombreStr,char* empleoStr,char* edadStr,char* horasTrabajadasStr,char* sueldoStr);

int employee_setId(Employee* this,int id);
int employee_getId(Employee* this);

int employee_setNombre(Employee* this,char* nombre);
int employee_getNombre(Employee* this);

int employee_setEmpleo(Employee* this,char* empleo);
int employee_getEmpleo(Employee* this);

int employee_setEdad(Employee* this,int edad);
int employee_getEdad(Employee* this);

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas);
int employee_getHorasTrabajadas(Employee* this);

int employee_setSueldo(Employee* this,float sueldo);
float employee_getSueldo(Employee* this);

int laQueMapea(Employee*);


int employee_sort(Employee* e1,Employee* e2);

