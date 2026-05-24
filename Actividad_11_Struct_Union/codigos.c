STRUCT ALUMNO
#include <stdio.h>
#include <stdlib.h>

struct alumno{

    char nombre[20];
    float cal;
    int act;

};
int main()
{
    struct alumno grupo[3];

    for(int i=0; i<3; i++){
    printf("Nombre del alumno numnero %d:\n",i+1);
    fgets(grupo[i].nombre,20,stdin);

    printf("\nCalificacion:\n");
    scanf("%f",&grupo[i].cal);

    printf("Actividades realizadas:\n");
    scanf("%d",&grupo[i].act);
    getchar();
    }

for(int i=0; i<3; i++){
    printf("Los datos del alumno %d son\n", i+1);
    printf("Su nombre es %s\n", grupo[i].nombre);
    printf("Su calificacion es %.2f\n",grupo[i].cal);
    printf("Su numero de actividades es%i\n",grupo[i].act);
}
    return 0;
}

ALUMNO UNION
#include <stdio.h>

union DatoAlumno {
    float cal;
    int act;
};

int main() {
    union DatoAlumno registro;

    registro.cal = 9.5;
    printf("La calificacion es: %.2f\n", registro.cal);

    registro.act = 12;
    printf("El numero de actividades es: %d\n", registro.act);



    return 0;
}

STRUCT BARCO
#include <stdio.h>
#include <stdlib.h>

struct barco{
char nombre[20];
int peso;
int tripulacion;
int tamano;
};

int f_bajan(struct barco *p){
p-> tripulacion = p-> tripulacion-2;
if(p->tripulacion <= 0)
    return 0;
else
    f_bajan(p);
}
int main()
{
    struct barco *totopo;
    struct barco toto;

    toto.peso =1000;
    toto.tripulacion=10;
    totopo = &toto;

    printf("%d\n",toto.peso);

    f_bajan(totopo);
    printf("La tripulacion al bajar es: %d\n", toto.tripulacion);

    return 0;
}
