#include <stdio.h>

float cuadrado(float num);
void cuadradoRef(float num, float* resul);
void mostrarProps(float* var);				//supongo que la variable que recibo es puntero a flotante
void invertir(float* a, float* b);			//supongo que la variable que recibo es puntero a flotante
void orden(float* a, float* b);				//supongo que la variable que recibo es puntero a flotante

int main()
{
	float num1, num2;
	float* pnum1 = &num1;
	float* pnum2 = &num2;
	float resul;
	float* presul = &resul;
	printf("ingrese el primer numero flotante: ");
	scanf("%f", &num1);
	printf("ingrese el segundo numero flotante: ");
	scanf("%f", &num2);
	printf("cuadrado de %.2f: %.2f\n", num1, cuadrado(num1));
	cuadradoRef(num2, presul);
	printf("cuadrado de %.2f: %.2f\n", num2, *presul);
	printf("propiedades de num1:\n");
	mostrarProps(pnum1);
	printf("\npropiedades de num2:\n");
	mostrarProps(pnum1);
	printf("accion de la funcion invertir\nantes:\n\ta = %.2f\n\tb = %.2f\n", num1, num2);
	invertir(pnum1, pnum2);
	printf("despues:\n\ta = %.2f\n\tb = %.2f\n", num1, num2);
	printf("accion de la funcion orden\nantes:\n\ta = %.2f\n\tb = %.2f\n", num1, num2);
	orden(pnum1, pnum2);
	printf("despues:\n\ta = %.2f\n\tb = %.2f\n", num1, num2);
	return 0;
}

float cuadrado(float num)
{
	float resul;
	resul = num * num;

	return resul;
}

void cuadradoRef(float num, float* resul)
{
	*resul = num * num;
}

void mostrarProps(float* var)
{
	printf("\tdireccion de la variable flotante: %p\n", var);
	printf("\tcontenido de la variable flotante: %.2f\n", *var);
}

void invertir(float* a, float* b)
{
	float aux = *a;
	*a = *b;
	*b = aux;
}

void orden(float* a, float* b)
{
	float aux;
	if (*a > *b)
	{
		aux = *a;
		*a = *b;
		*b = aux;
	}
}