
#include<stdio.h>
int main(){
int edad;
float promedio;
int materias;
int faltas;
printf("Ingresa tu edad:\n");
scanf("%d",& edad);
printf("Ingresa tu promedio:\n");
scanf("%f",&promedio);
printf("Ingresa la cantidad de materias reprobadas:\n");
scanf("%d",&materias);
printf("Ingresa las faltas acumuladas:\n");
scanf("%d",& faltas);
printf("------Estado de inscripcion------\n\n");
if(materias>3){
printf("Lo sentimos, ya no puedes reinscribirte\n\n");
}else if(materias<=2){
printf("Tienes oportunidad de reinscribirte\n\n");
}else{
printf("Necesitas una revision especial\n\n");
}
printf("------Elegibilidad de beca------\n\n");
if(promedio>=9 && materias==0 ){
if(faltas<5){
printf("FELICIDADES!!, Eres elegible para la beca\n\n");}
}else {
printf("Lo sentimos, no eres elegible\n\n");
}
if(promedio>6 || materias>=4 || faltas>15){
printf("Estas en una situacion critica\n\n");
}
return 0;
}
