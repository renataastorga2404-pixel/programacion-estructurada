-fgets
#include  <stdio.h>
#include <string.h>

int main(){
//lectura de cadena utilizando fgets
    char nombre[20];
    printf("Ingresa tu nombre y apellido:\n");
    fgets(nombre,sizeof(nombre),stdin);
    printf("%s\n",nombre);

    return 0;
}

-strlen
#include  <stdio.h>
#include <string.h>

int main(){
//lista de nombres usando for y su longitud
    char lista[5][50];
    int longitud;
    for(int i = 0; i < 5; i++){
        printf("Ingresa el nombre numero %i \n", i+1);
        fgets(lista[i],sizeof(lista[i]),stdin);}
    printf("\n\nNombres del equipo y la longitud\n\n");

  for(int j = 0; j < 5; j++){
       printf("%s",lista[j]);
       longitud = strlen(lista[j]);
       printf("...La longitud %s,es %d... \n", lista[j], longitud);}

return 0;
}

-strcat
#include <stdio.h>
#include <string.h>

int main()
{
  char nombre[50];
  char apellido[20];
 printf("Ingresa tu nombre:\n");
 fgets(nombre, sizeof(nombre),stdin);

printf("Ingresa tu apellido:\n");
fgets(apellido, sizeof(apellido),stdin);


 strcat(nombre, apellido);

 printf("Tu nombre completo es %s\n",nombre);

return 0;
}

-strcmp
#include <stdio.h>
#include <string.h>

int main()
{
 char a[20];
 char b[20];

 printf("Ingresa el primer nombre:\n");
 fgets(a,sizeof(a),stdin);

 printf("Ingresa el segundo nombre:\n");
 fgets(b,sizeof(b),stdin);

 if(strcmp(a,b)!=0){
    printf("Son distintos los nombres \n");
 }else {
    printf("Es el mismo nombre\n");
 }


return 0;
}

-strcpy
#include  <stdio.h>
#include <string.h>

int main(){
//LISTA DE NOMBRES UTILIZANDO STRCPY
    int longitud;
    char integrantes[3][20];
    char nombre[30];
       for(int i = 0; i < 3; i++){
        printf("Ingresa el nombre de el integrante numero %i\n",i+1);
        fgets(nombre, sizeof(nombre),stdin);
         strcpy(integrantes[i],nombre);

       }
       printf("Lista de los integrantes\n");
       for(int i = 0; i < 3; i++){
         printf("Integrante %i: %s",i+1, integrantes[i]);}

return 0;
}




