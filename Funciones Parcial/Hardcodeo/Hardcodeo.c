Hardcodeo de datos

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

} eEmployee;



void hardcodearDatosEmpleados(eEmployee lista[], int tam)
{
    int i;
    int id[]= {0,1,2,3,4};
    char nombres[][50]= {"Carlos","Maria","Carlos","Pedro","Juan"};
    char apellidos[][50]={"Mendez","Perez","Gomez","Pantano","Rodriguez"};
    float sueldosBruto[]= {22000,22000,15000,40000,10000};
    int sector[]={3,1,2,1,3};

    for(i=0; i<tam; i++)
    {
        lista[i].id = id[i];
        strcpy(lista[i].name, nombres[i]);
        strcpy(lista[i].lastName, apellidos[i]);
        lista[i].sector= sector[i];

        lista[i].salary = sueldosBruto[i];

        lista[i].isEmpty = FALSE;




    }
}

productos

   int id[]= {0,1,2,3,4};
char descripcion[][50]= {"Goma","Lapiz","Sacapuntas","Resaltador","Lapicera"};
float precio[]={12,14,10,16,8};
