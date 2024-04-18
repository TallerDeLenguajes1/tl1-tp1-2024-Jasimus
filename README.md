# tp1 

## �Por qu� es conveniente incluir el archivo _.gitignore_? 
En nuestro repositorio puede que tengamos archivos con informaci�n sensible o archivos que se crean automaticamente por acci�n de otros programas, como lo son los .log o .tmp. Podemos incluir estos archivos en el archivo _.gitignore_ y as�, al momento de hacer el commit, estos no se incluyan en el repositorio.

## �Cu�ndo se debe hacer?
Si tenemos alg�n archivo que no queramos mostrar o incluir en nuestro repositorio, debemos incluirlo en el archivo _.gitignore_.

## �C�mo configurar�a el archivo _.gitignore_?
Aquellos archivos o directorios que coincidan de alguna forma con una linea en el archivo _.gitignore_ se ignorar�n. Los archivos _.gitignore_ usan patrones globales para el establecimiento de coincidencias con nombres de archivos o directorios. [Ac�](https://www.atlassian.com/es/git/tutorials/saving-changes/gitignore) hay una gu�a de los s�mbolos que se pueden utilizar.

## Respuesta al apartado _g)_ del punto **3**
El resultado del apartado 2 y 3 son el mismo, pues el resultado del apartado 2 es la direcci�n de memoria a la que apunta el puntero, que es la direcci�n de memoria de la variable, y el resultado del apartado 3 es la direcci�n de memoria de la variable: esencialmente son lo mismo, pues al principio impuse eso en las lineas 5 y 6:

	5. int entero = 10;
	6. int* pint = &entero;

En el punto 4 se obtiene la direcci�n de memoria del puntero, que es distinta a la direcci�n a la que apunta, pues el puntero es otra variable almacenada en otro espacio de memoria. Una cosa es la direcci�n de memoria de la variable puntero, y otra es el valor almacenado en esa variable.