# Actividad: Funciones
## Descripción
### Programa 1:Filtrado de arreglo
Este programa usa cuatro funciones capturar, mostrar, filtrar y archivo. ademas el sistema solicitaal usuario 6 números enteros para llenar un arreglo original y extrae unicamente los números impares para copiarlos en un segundo arreglo y al final exporta ambos resultados a un archivo externoq eu se llama resultado.txt.
### Programa 2: Suma
Este es un programa básico diseñado para una función matematica solicita dos números enteros al usuario en el main y realiza la operación aritmética de adición y muestra el resultado en la panatalla.
### Programa 3: Moatra matriz
Inicializa una matriz bidimensional 2x3 de forma estática con valores predefinidos del 1 al 6 y luego la funcion de mostrar matriz imprime los valores , la cual tiene ciclos anidados ayuda a dar un fromato de filas y columnas 
### Programa 4: Parametro por valor
Es un programa experimental que muestra el comportamiento del paso de parámetros por valor en c, al enviar una variable a la función cambiar , genera una copia local dentro de la función y el programa comprueba que cualquier modificación interna no afecta ni alterará la variable original que se declaró en el main.
### Programa 5: Parametro por referencia
Por otro lado este codigo nos muestra el paso de parámetros por referencia utilizando apountadores int*x, al enviar la dirección de memoria de la variable &n, la funcion que es duplicar tiene acceso directo a el espacio de memoria origibal y logra modificar el valor directamente fuera del main.
### Suma de diagonal
Este programa maneja una matriz 3x3 y cuanta con funciones como capturar, mortarmatriz, y suma de los elementos en la diagonal principal, al final el programa abre un archivo llamado tablero.txt en modo adjuntar para guardar la estructura de la matriz
## Temas aplicados
- Funciones
- paso de parámetro por valor y por referencia
- matrices
- Archivos flujo de salida y entrada de datos
- operadores aritmeticos
## Compilación
gcc filtrado.c -o prog_filtrado
gcc suma.c -o prog_suma
gcc matriz.c -o prog_matriz
gcc valor.c -o prog_valor
gcc referencia.c -o prog_referencia
gcc diagonal.c -o prog_diagonal
## Ejecución
./prog_filtrado
./prog_suma
./prog_matriz
./prog_valor
./prog_referencia
./prog_diagonal
