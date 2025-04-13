# Generador-R-Combinaciones
Autor: Isaac Espinoza Hernández.

## Descripcion:
Este proyecto es sobre un programa en C++ en el que se generan todas las posibles r-combinaciones de un conjunto de tamaño n. Tambien, una caracteristicas es que son generadas en orden lexicográfico y se guardan en un archivo de texto llamado ```Combinaciones.txt```.

## Requisitos del sistema:
**Sistema operativo:**
- Windows 7 o superior
- Linux
- MacOS

**Componentes del computador:**
- Procesador: Intel o AMD de 1GHz o superior
- Memoria RAM: 256 MB mínimo
- Espacio disponible: Al menos 10 MB libres.

**Software**
- Compilador de C++

## Instrucciones de compilación:
Para compilar el programa navege hasta el directorio donde se encuentre el archivo 'Combinaciones.cpp' y ejecute el comando:

```
g++ .\combinaciones.cpp -o combinaciones
```

Despues, para ejecutar el programa use:

```
.\combinaciones.exe
```

Luego, sigua las instrucciones en pantalla para generar las combinaciones en el archivo de texto.

## ¿Como funciona el algoritmo?
El programa primero llena un arreglo de tamaño r con valores desde 1 hasta r.
luego, el algoritmo incrementa el último elemento posible y luego reajusta las posiciones anteriores para mantener el orden creciente. Por ejemplo:

## Orden lexicográfico:
El orden lexicográfico es una forma de ordenar listas de forma parecida a como están ordenadas las palabras de un diccionario. Primero se define que simbolo es menor o mayor que otro y así se va formando un orden.

## Validación de entrada:
El programa pide 2 condiciones para los valores de entrada;
-'n' tiene que estar en el rango de [1,25].
-'r' tiene que se mayor o igual a 0, y menor o igual que n.

## Formato de salida:
![image](https://github.com/user-attachments/assets/9061e1ff-9546-49f1-a782-a8289fc056c8)

El programa generará un archivo de texto que tendra la estructura de la imagen de arriba. Cada renglon representa una combinacion distinta y cada elemento esta separado por un espacio.

## Verificación C(n,r):
El programa deberia generar $\frac{n!}{(n-r)!r!}$ combinaciones. Podemos verificar que el programa si escribe esta cantidad de combinaciones al verificar la cantidad de renglones que se generan en el archivo de texto. Por ejemplo:

$C(25,13) = 5,200,300$

![image](https://github.com/user-attachments/assets/d2e8fd0a-4f6f-4e89-8f72-9cdb5ef635fb)


Si nos fijamos en el archivo de texto tiene 5,200,302 lineas, y esto se debe a que al inicio hay 2 renglones usandose para indicar la operacion realizada.


