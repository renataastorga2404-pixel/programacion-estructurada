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

-PRIMOS switch
#include<stdio.h>
int main (){
int numero;
int i=2;
int primo=1;

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
