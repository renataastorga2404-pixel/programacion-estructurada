Arreglo
#include <stdio.h>

 void capturar(int v[], int n){
for(int i=0; i<n; i++){
  printf("Ingresa el numero entero %i:",i+1);
  scanf("%d", &v[i]);}
 }

 void mostrar(int v[6], int n){
   for(int i=0; i<n; i++){
             printf("%d",v[i]);
        }
        printf("\n");
 }
 void filtrar(int arreglo1[6], int arreglo2[6], int n){
        int j=0;
        for(int i = 0; i  < n; i++){
            if(arreglo1[i] %2 != 0){
              arreglo2[j] = arreglo1[i];
              j++;
            }
        }
 }
void archivo(int arreglo1[], int n1,int arreglo2[], int n2){
 FILE *f;
 f=fopen ("resultado.txt","w");

 fprintf(f,"Arreglo original:\n");
 for(int i=0; i<n1; i++){
    fprintf(f,"%d", arreglo1[i]);

 }
 fprintf(f,"\n");

 fprintf(f,"Arreglo filtrado:\n");
 for(int j=0; j<n2; j++){
    fprintf(f,"%d",arreglo2[j]);
 }
 fprintf(f,"\n");
 fclose(f);
 }


int main()
{
    int n=6;
    int arreglo1[6];

    int arreglo2[3];

    capturar(arreglo1,n);
    mostrar(arreglo1,n);

 filtrar(arreglo1,arreglo2,n);

  mostrar(arreglo2,3);

  archivo(arreglo1,n,arreglo2,3);
    return 0;
}

Suma
#include <stdio.h>
#include <stdlib.h>
int suma(int a, int b){
    int resultado=a+b;
    return 1;}
int main(){
    int a;
    int b;
    int resultado;

printf("Ingresa dos numeros enteros:");
scanf("%i", &a);
scanf("%i", &b);

resultado=a+b;
 printf("Tu resultado es:%i",resultado);

return 0;
}

Moatrar Matriz 
#include<stdio.h>

void mostrarMatriz(int m[2][3]){
    int i,j;
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int matriz[2][3]={{1,2,3},{4,5,6}};
    mostrarMatriz (matriz);
    return 0;

}

Parametro por valor
#include <stdio.h>

void cambiar (int x){
    x=100;
}

int main(){
    int a=5;
    cambiar(a);
    printf("%d", a);

    return 0;
}

Parametro por refrerencia
#include <stdio.h>

void duplicar(int *x){
    *x = (*x)*2;
}

int main(){
    int n=4;
    duplicar(&n);
    printf("%d", n);
    return 0;
}

Suma diagonal
#include <stdio.h>
#include <stdlib.h>

void mostrar(int arre[3][3], int n){
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
         printf("%i", arre[i][j]);
    }
      printf("\n");
  }
}
void capturar(int arre[3][3], int n){
 for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("Ingresa los numeros enteros en la fila %i, columna %i:\n", i+1, j+1);
        scanf("%d", &arre[i][j]);
    }
 }
}

int diagonal (int arre[3][3], int n){
    int a=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
               a+= arre[i][j];
            }
        }
    }
    return a;
}


int main()
{
   int arre[3][3];
   int n=3;

    capturar(arre,n);
    mostrar(arre,n);

   int a= diagonal(arre,n);

    printf("La suma de la diagonal es %i\n", a);

    FILE*f;
    f=fopen ("tablero.txt","a");
    fprintf(f,"Tablero:\n");
    for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
         fprintf(f," %i", arre[i][j]);
    }fprintf(f,"\n");
    }

    fprintf(f,"La suma de la diagonal es %i\n", a);
    return 0;
}
