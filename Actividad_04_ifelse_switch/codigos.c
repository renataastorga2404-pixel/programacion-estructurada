-EDAD if else
#include <stdio.h>
int main()
{
    int edad;
    printf("Ingresa tu edad:");
    scanf("%d",&edad);

    if(edad>=18){
    printf("Eres mayor de edad");}
    else{
        printf("Eres menor de edad");
    }
    return 0;
}

-IMPAR O PAR if else 
#include<stdio.h>
int main(){
int a;
printf("Ingresa un numero:\n");
scanf("%d",&a);

if(a%2!=0){
printf("Tu numero es impar\n");}
  else{
    printf("Tu numero es par");}
return 0;
}

-PRIMOS if
#include<stdio.h>
int main (){
int numero;
int i=2;

printf("Ingresa un numero:\n");
scanf("%d",&numero);

while(numero>i){
    if(numero%i==0){
   printf("El numero no es primo");
        return 0;
    }

    i++;
}

printf("El numero es primo");

return 0;
}


-PROMEDIO if else 
#include <stdio.h>

int main(){
float promedio;
int materias;

printf("Ingresa tu promedio actual:\n");
scanf("%f",& promedio);

printf("Ingresa la cantidad de materias reprobadas:\n");
scanf("%d",&materias);

if(promedio>=8.5 && materias==0){
    printf("Felicidades, obtuviste la beca\n");
}
else{
    printf("Lo siento, no obtuviste la beca\n");
}
return 0;
}

-Calculadora Switch
#include <stdio.h>
int main()
{
  int opcionP;
  int opcionC;
  int x;
  int y;

do{
  printf("------Bienvenido al menu-------\n");
  printf("Elige una opcion:\n");
  printf("...1.Analizar un numero:\n");
  printf("...2.Calculadora:\n");
  printf("...3.Salir:\n");
  scanf("%d",&opcionP);

  switch(opcionP)
  {
    case 1://Analizar el numero
        printf("...Opcion seleccionador: Analizar un numero...\n");
        printf("Ingresa un numero entero:\n");
        scanf("%d",&x);

        if(x %2 == 0){
            printf("Tu numero es par\n\n");
        }else{
            printf("Tu numero es impar\n\n");
            }

        break;

    case 2://Calculadora
         printf("\nOpcion seleccionado calculadora\n");

         printf("Elige una operacion que quisiera realizar\n");
         printf("...1.Sumar...\n");
         printf("...2.Restar...\n");
         printf("...3.Regresar...\n");
         scanf("%d",&opcionC);

         switch(opcionC)
         {
        case 1://Sumar
            printf("Ingresa el primer numero:");
            scanf("%d",&x);
            printf("Ingresa el segundo numero:");
            scanf("%d",&y);

            printf("El resultado de tu suma es %d\n\n", x+y);
            break;

        case 2://restar
            printf("Ingresa el primer numero:");
            scanf("%d",&x);
            printf("Ingresa el segundo numero:");
            scanf("%d",&y);

            printf("El resultado de tu resta es %d\n\n", x-y);
            break;

        case 3://regresar
            printf("...Termino la calculadora...\n\n");
            break;

             default:
            printf("Opcion No valida, Ingresa otra opcion:\n");
         }

        break;

    case 3://salir
        printf("----Fin del programa----\n");
        return 0;
        break;


    default:
     printf("-----Opcion NO valida------\n");

  }
}while(opcionP !=3);
return 0;
}

