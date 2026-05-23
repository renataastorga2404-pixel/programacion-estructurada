Promedio for y while
#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    float calificacion;
    float promedio;
    int i;
    int opcion;
    float suma;
    printf("-----Menu------\n");
    printf("1. Promediar\n");
    printf("2. Salir\n");
    printf("Selecciona una opcion: ");
    scanf("%d", &opcion);

    while (opcion != 2){
        suma = 0;
        printf("\nIngresa el numero de materias: ");
        scanf("%d", &N);

        for(i = 1; i <= N; i++){
            printf("Ingresa la calificacion de la materia %d: ", i);
            scanf("%f", &calificacion);

            while(calificacion < 0 || calificacion > 100){
                printf("Calificacion no valida. Ingrese otra por favor (0-100): ");
                scanf("%f", &calificacion);
            }

            suma += calificacion;
        }

        promedio = suma / N;
        printf("\n===================================\n");
        printf("El promedio es de: %.2f\n", promedio);
        printf("===================================\n\n");

        printf("-----Menu------\n");
        printf("1. Promediar\n");
        printf("2. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);
    }
    return 0;
}

While
#include <stdio.h>

int main(){
int x;
int suma=0;
printf("Ingresa numero:");
scanf("%d",&x);

while(x!=0){
    suma+= x;
    printf("%d\n", suma);
    printf("Ingrese un numero:");
    scanf("%d",&x);
}
return 0;

}

Menu while
#include <stdio.h>

int main(){
int opcion;
do{
    printf("1. continuar\n");
    printf("2.salir\n");
    scanf("%d", &opcion);
}
while (opcion!=2);
return 0;

}

