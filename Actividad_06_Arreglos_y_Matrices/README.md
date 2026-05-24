# Actividad: Arreglos y matrices
## Descripción
### Programa 1:Direcciones de memoria en arreglos
Este es un programa mas que nada experimental para analizar como es que se organiza la Ram en C. La pantalla muestar las direcciones de variables individuales y las posiciones de un arreglo tipo float.
### Programa 2:Temperaturas
Este programa captura y almacena un historial de temperaturas utilizando un arreglo unidimensional, además el flujo consta de dos ciclos de for para el primero se encarga de solicitar y guardar las temperaturas y el otro de imprimir los valores que guardo.
### Programa 3:Nombre completo
Es un rpograma que tiene cadenas de texto mediante un arreglo bidimensional de caracteres, así que captura de manera individual el primer nombre, segundo nombre y los dos apellidos utilizando fgets, imprime el nombre completo en una sola linea y también nos da la direccion de memoria de cada sección del arreglo.
### Programa 4: Batalla Naval
Este codigo simula la base de un juego de batalla naval mediante una matriz o arreglo bidimensional 5x5 que representa el océano, entonces el programa inicializa el tablero en ceros oculta tres barcos que se representan con el número 1, en coordenadas especificas, y visualmente dibuja el mar usando caracteres ~, y al final se le pide al usuario ingresar una coordenada para realizar un disparo.

## Temas aplicados
- arreglos unidimensionales
- arreglo bidimensionales 
- ciclos anidados de for
- fgets
- operador de direccion &
## Compilación
gcc memoria.c -o memoria
gcc temperaturas.c -o temperaturas
gcc nombre.c -o nombre
gcc naval.c -o naval
## Ejecución
./memoria
./temperaturas
./nombre
./naval
