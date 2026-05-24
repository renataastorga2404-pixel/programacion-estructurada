# Actividad: Struct y Union 
## Descripción
### Programa 1:Registro de estudiantes
Este programa utiliza estructura para agrupar diferentes tipos de datos relacionados con un estudiante: nombre,calificaión y actividades realizadas, así que el programa crea un arreglo de tres estrusturas para representar a un grupo de alumnos, y solivita los datos de cada uno y finalmente imprime la información guardado de todo el grupo.
### Programa 2:Alumno Union
Este programa esta diseñado para mostrar el funcionamiento de union, ya que a diferencia de struct los miembros de union pues comparten el musmo espacio de memoria, entnces el programa asigno valores y esto muestra como la union optimiza espacio almacenado.
### Programa Struct Barco
En este programa es sobre una embarcación mediante un struct llamado barco y en el main se crea un objeto toto que se le asignan valores y se configuea un apuntador struct barco*totopo hacia su direccion de memoria, después se invoca la funcion f:bajan que esta altera los datos mediante el operador flecha restando 2 en 2 a los tripulantes hasta que la tripulación llegue a cero.
## Temas aplicados
- struct
- union
- apuntadores
- operador flecha
- funciones con logica recursiva

## Compilación
gcc struct_alumno.c -o prog_alumno
gcc union_alumno.c -o prog_union
gcc struct_barco.c -o prog_barco
## Ejecución
./prog_alumno
./prog_union
./prog_barco
