# Librería Arduino QuickSort
Librería para Arduino que aplica el algoritmo QuickSort para ordenar un array en Arduino. <br />
Más información https://www.luisllamas.es/libreria-arduino-quicksort/

## Instrucciones de uso
La librería dispone de dos métodos estáticos para la ordenación de vectores. No es necesario, por tanto, instanciar un objeto.

La librería incorpora dos métodos estáticos para el calculo de QuickSort ascendente y descendente. Se usan templates para que funcionen con distintos tipos de variables (int, long, float…). La librería incorpora dos ejemplos, uno para int y otro para float.

Para la ordenación en sentido ascendente usaríamos el método SortAscending.

```c++
QuickSort<int>::SortAscending(items, initItem, numItems);
```

Mientras que para la ordenación en sentido descendente usaríamos el método SortDescending.
```c++
QuickSort<int>::SortDescending(items, initItem, numItems);
```

## Ejemplos
La librería QuickSort incluye los siguientes ejemplos para ilustrar su uso.
* QuickSortInt: Ejemplo de uso para variables integer.
* QuickSortFloat: Ejemplo de uso para variables float.
