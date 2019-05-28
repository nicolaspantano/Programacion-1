
typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;


}eEmpleado;

eEmpleado* add_eEmpleado();
void set_legajo(eEmpleado*,int);
void set_nombre(eEmpleado*,char[]);
void set_sueldo(eEmpleado*,float);
