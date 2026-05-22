-BECAS
#include <stdio.h>
int becas(){
 int edad;
 int promedio;
 int materias;

 printf("Ingresa tu edad:\n");
 scanf("%d",&edad);

 printf("Ingresa tu promedio:\n");
 scanf("%d", &promedio);

 printf("Ingresa la cantidad de materia reporbadas:\n");
 scanf("%d", &materias);

 if(promedio>=9 && materias==0){
    printf("Felicidades, obtienes la beca\n");
 }else if(materias<=2){
    printf("Tienes posibilidad de reinscribirte para obtener la beca");
 }else{
    printf("Lo sentimos, estas en una situacion critica");
 }
return 0;
}

-EDAD
#include <stdio.h>
int edad()
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

-IMPAR
#include<stdio.h>
int impar(){
int a;
printf("Ingresa un numero:\n");
scanf("%d",&a);

if(a%2!=0);{
printf("Tu numero es impar\n");}
return 0;
}

-PAR
#include<stdio.h>
int par(){
int a;
printf("Ingresa un numero:\n");
scanf("%d",&a);

if(a%2==0);{
printf("Tu numero es par\n");}
return 0;
}

-PRIMOS
#include<stdio.h>
int main (){
int numero;
int i=1;

printf("Ingresa un numero:\n");
scanf("%d",&numero);

while(numero>i){
    if(numero%i==0){
        printf("El numero no es primo");
    i++;
    break;
    }else{
    printf("El numero es primo");
    }
}
return 0;
}

-PROMEDIO
#include <stdio.h>

int promedio(){
int promedio;
int materias;

printf("Ingresa tu promedio actual:\n");
scanf("%d",& promedio);

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

