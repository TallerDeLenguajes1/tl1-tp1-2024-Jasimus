#include <stdio.h>

int main()
{
	int entero = 10;
	int* pint = &entero;

	printf("hola mundo!\n");
	printf("contenido de la variable: %d\n", *pint);
	printf("direccion de memoria almacenada por el puntero: %p\n", pint);
	printf("direccion de memoria de la variable: %p\n", &entero);
	printf("direccion de memoria del puntero: %p\n", &pint);
	printf("tamanio de memoria utilizado por la variable: %d\n", sizeof(entero));
	
	return 0;
}