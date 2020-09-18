#include <stdio.h>					//Para entrada/salida de consola
#include <limits.h>					//Limites de variables tipo entero
#include <float.h>					//Limites de variables tipo float

int main(void) {
	printf("Variables del tipo char almacenan valores desde %d hasta %d\n", CHAR_MIN, CHAR_MAX);
	printf("Variables del tipo unsigned char almacenan valores desde 0 hasta %u\n", UCHAR_MAX);
	printf("Variables del tipo short almacenan valores desde %d hasta %d\n", SHRT_MIN, SHRT_MAX);
	printf("Variables del tipo unsigned short almacenan valores desde 0 hasta %u\n", USHRT_MAX);
	printf("Variables del tipo int almacenan valores desde %d hasta %d\n", INT_MIN, INT_MAX);
	printf("Variables del tipo unsigned int almacenan valores desde 0 hasta %u\n", UINT_MAX);
	printf("Variables del tipo long almacenan valores desde %ld hasta %ld\n", LONG_MIN, LONG_MAX);
	printf("Variables del tipo unsigned long almacenan valores desde 0 hasta %lu\n", ULONG_MAX);
	printf("Variables del tipo long long almacenan valores desde %lld hasta %lld\n", LLONG_MIN, LLONG_MAX);
	printf("Variables del tipo unsigned long long almacenan valores desde 0 hasta %llu\n", ULLONG_MAX);
	printf("\n");
	printf("El tamaño del valor mas pequeño positivo no-cero del tipo float es %.3e\n", FLT_MIN);
	printf("El tamaño del valor mas grande del tipo float es %.3e\n", FLT_MAX);
	printf("El tamaño del valor mas pequeño del tipo double es %.3e\n", DBL_MIN);
	printf("El tamaño del valor mas grande del tipo double es %.3e\n", DBL_MAX);
	printf("El tamaño del valor mas pequeño del tipo long double es %.3Le\n", LDBL_MIN);
	printf("El tamaño del lvalor mas grande del tipo long double es %.3Le\n", LDBL_MAX);
	printf("\n");
	printf("Variables del tipo float dan %u digitos decimales de precision. \n", FLT_DIG);
	printf("Variables del tipo double dan %u digitos decimales de precision. \n", DBL_DIG);
	printf("Variables del tipo long double dan %u digitos decimales de precision. \n",LDBL_DIG);
	return 0;
}