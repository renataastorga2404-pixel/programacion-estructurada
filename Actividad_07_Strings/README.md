# Actividad: Strings
## Descripción
### Programa 1:Fgets 
Este programa nos muestra el uso correcto de fgets, ya que a diferencia de scanf este metodo nos permite capturar cadenas de caracteres que incluyen espacios en blanco.
### Programa 2:Strlen 
Este programa almacena los nombres de 5 integrantes en un arreglo bidimensional mediante un ciclo for, y luego utiliza un segundo ciclo para recorrer la lista y aplica la función strlen la cual calcula y muestra de forma automática la longitud exacta de caracteres incluyendo el salto de linea de cada nombre.
### Programa 3:strcat
Este programa le pide al usuario su nombre y apellido de manera independiente y luego utiliza la función strcat para unir el apellido directamente al final de la cadena del nombre fusionandolos en una sola variable.
### Programa 4: strcmp
Este programa esta diseñado para evaluar la igualdad entre dos cadenas de textos al capturar dos nombres utiliza la función strcmp dentro de una estructura if-else y evalua si son distintos nombres o se trata del mismo nombre.
### Programa 5: strcpy 
Este programa ilustra como transferir información de una cadena a otra mediante la función strcpy, así que el sitema pide nombres de 3 integrantes  usando una variable temporal y en cada iteración del ciclo copia el tecto capturado hacia lo posición correspondiente dentro del arreglo final.

## Temas aplicados
- arreglos unidimensionales
- fgets
- stdin
- funciones escenciales de la libreria string.h

## Compilación
gcc fgets.c -o prog_fgets
gcc strlen.c -o prog_strlen
gcc strcat.c -o prog_strcat
gcc strcmp.c -o prog_strcmp
gcc strcpy.c -o prog_strcpy
## Ejecución
./prog_fgets
./prog_strlen
./prog_strcat
./prog_strcmp
./prog_strcpy
