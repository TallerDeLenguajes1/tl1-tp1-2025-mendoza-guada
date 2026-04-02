A) codigo_misterio

Este código tiene 4 funciones:
-La primera invierte el orden del número ingresado. Ej: 234 se transforma en 432.
-La segunda divide ese nuevo número en 2 de forma entera.
-La tercera le suma al número, sus cifras.
-La cuarta ejecuta las primeras tres funciones en ese orden. 

B) codigo_sin_funcionar.c

El archivo codigo_sin_funcionar.c tenía errores de sintaxis, por ej. omitía algunos ";", en el scanf faltaba el "&".
No incluía la librería stdio.h
Además, la función no duplicaba la variable original, sino la variable local, por lo que mostraba su valor original.  
Los errores de sintaxis se corrigieron escribiendo bien las líneas de código. Se agregó la librería, y se cambió la función para que se llame a un puntero a entero, no a un entero. 

