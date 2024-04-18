# tp1 

## ¿Por qué es conveniente incluir el archivo _.gitignore_? 
En nuestro repositorio puede que tengamos archivos con información sensible o archivos que se crean automaticamente por acción de otros programas, como lo son los .log o .tmp. Podemos incluir estos archivos en el archivo _.gitignore_ y así, al momento de hacer el commit, estos no se incluyan en el repositorio.

## ¿Cuándo se debe hacer?
Si tenemos algún archivo que no queramos mostrar o incluir en nuestro repositorio, debemos incluirlo en el archivo _.gitignore_.

## ¿Cómo configuraría el archivo _.gitignore_?
Aquellos archivos o directorios que coincidan de alguna forma con una linea en el archivo _.gitignore_ se ignorarán. Los archivos _.gitignore_ usan patrones globales para el establecimiento de coincidencias con nombres de archivos o directorios. [Acá](https://www.atlassian.com/es/git/tutorials/saving-changes/gitignore) hay una guía de los símbolos que se pueden utilizar.

## Respuesta al apartado _g)_ del punto **3**
El resultado del apartado 2 y 3 son el mismo, pues el resultado del apartado 2 es la dirección de memoria a la que apunta el puntero, que es la dirección de memoria de la variable, y el resultado del apartado 3 es la dirección de memoria de la variable: esencialmente son lo mismo, pues al principio impuse eso en las lineas 5 y 6:

	5. int entero = 10;
	6. int* pint = &entero;

En el punto 4 se obtiene la dirección de memoria del puntero, que es distinta a la dirección a la que apunta, pues el puntero es otra variable almacenada en otro espacio de memoria. Una cosa es la dirección de memoria de la variable puntero, y otra es el valor almacenado en esa variable.