/*
 ============================================================================
 Name        : clase_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"

#define NUMEROS 2


int main(void)

{
    setbuf(stdout,NULL);

	int arrayEdades[NUMEROS];
	int respuesta;
	float promedio;
	int i;
	float libras;


		for(i=0;i<NUMEROS;i++)
		{
			if(utn_getNumero(&respuesta,"ingrese un numero ", "error. Pruebe otra vez",0,120, 4)==0)
			{
				arrayEdades[i]=respuesta;

			}

		}

	ordenarArrayInt(arrayEdades,NUMEROS);


	printArrayInt(arrayEdades,NUMEROS);


	if(arr_calcularPromedioInt(arrayEdades,NUMEROS,&promedio)==0)
	{
		printf("\nel promedio es %f",promedio);
	}




	for(int i=0;i<NUMEROS;i++)
	{
		if(conversorALibra(arrayEdades,NUMEROS,&libras)==0);
		{
			printf("\n en lbs %f",libras);
		}
	}




return EXIT_SUCCESS;
}


