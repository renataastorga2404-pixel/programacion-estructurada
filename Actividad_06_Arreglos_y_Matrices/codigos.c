-Direcciones de memoria arreglos
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp1, temp2;
    float temp[24];
    temp[0]=14.5;
    temp[20]=34.7;
    int dummy;
    printf("Direccion de temp1 %i\n",&temp1);
    printf("Direccion de temp2 %i\n",&temp2);

    printf("Direccion de temp[24]:%i,\n",temp);
    printf("Direccion de temp[24]:%i,\n",&temp[24]);

    printf("Direccion de &dummy %i\n",&dummy);
    printf("%f",temp[0]);

    return 0;
}

Temperaturas
#include <stdio.h>
int main()
{
  int N=4;//Define el tamaño de mi arreglo
  float temp[N];

  for(int h=0; h < N; h++)
  {
      printf("Ingresa la temperatura:\n");
      scanf("%f",&temp[h]);
  }

  for(int i=0; i< N ; i++)
  {
    printf("%.2f\n", temp[i]);

  }

  return 0;
}

-Nombre completo
#include <stdio.h>
#include <string.h>

int main()
{
 char nombre[4][20];

 printf("Ingresa tu primer nombre:\n");
 fgets(nombre[0],sizeof(nombre[0]),stdin);

 printf("Ingresa tu segundo nombre:\n");
 fgets(nombre[1],sizeof(nombre[1]),stdin);

 printf("Ingresa tu primer apellido:\n");
 fgets(nombre[2],sizeof(nombre[2]),stdin);

printf("Ingresa tu segundo apellido:\n");
 fgets(nombre[3],sizeof(nombre[3]),stdin);

 //printf("%s",nombre[0]);
 //printf("%s",nombre[1]);
 //printf("%s",nombre[2]);
 //printf("%s",nombre[3]);


for(int i = 0; i<4; i++){
nombre[i][strcspn(nombre[i],"\n")] = 0;
    printf("%s ", nombre[i]);}

printf("\nDireccion de memoria\n");
for(int j=0; j<4; j++){
    printf("%d\n",&nombre[j]);
}


return 0;}

Batalla Naval
#include <stdio.h>

int main()
{
    int tablero[5][5];
    int fila, columna;

    for(int i=0;i>5; i++){
        for(int j=0; j<5; j++){
            tablero[i][j]=0;
        }
    }
    tablero[1][2]=1;
    tablero[3][4]=1;
    tablero[0][0]=1;

    for(int i = 0; i < 5; i++) {
      for(int j = 0; j < 5; j++) {
        printf("~ ");
    }
    printf("\\n");
}
    printf("Fila: ");
    scanf("%d", &fila);
    printf("Columna: ");
    scanf("%d", &columna);

    return 0;
}
