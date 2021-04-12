
/*
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "array.h"

int utn_getNumero(int* pResultado,char* mensaje, char*mensajeError,int minimo,int maximo, int reintentos)
{
	int retorno=-1;
	int bufferInt;
	if(pResultado !=NULL && mensaje !=NULL && mensajeError !=NULL && minimo <= maximo && reintentos >=0)
	{
		do
		{
			 printf("%s",mensaje);
			 fflush(stdin);
			 scanf("%d",&bufferInt);
			 if(bufferInt >= minimo && bufferInt <= maximo)
			 {
				 *pResultado = bufferInt;
				 retorno = 0;
				 break;
			 }
			 else
			 {
				 printf("%s", mensajeError);
				 reintentos--;
			 }
	    }while(reintentos >= 0);

	}
	return retorno;
}


int arr_calcularMaximoInt(int array[],int limite,int* resultado)
{
	int retorno=-1;
	int bufferInt;
	if(array !=NULL && resultado !=NULL && limite > 0)
	{
		retorno=-1;
		bufferInt= array[0];
		for(int i=0;i<limite;i++)

	 if(array[i]>bufferInt)
      {
		 bufferInt=array[i];
      }
	  *resultado=bufferInt;
	retorno=0;
      }

return retorno;
}



int arr_calcularMinimoInt(int* array,int limite, int* resultado)
{
	int retorno=-1;
	int bufferInt;

	if(array != NULL && resultado != NULL && limite > 0)
	{
		retorno = -1;
		bufferInt = array[0];
		for(int i=0;i<limite;i++)
		{
         if(array[i]<bufferInt)
         {
         bufferInt = array[i];
         }
         *resultado=bufferInt;
		 retorno = 0;
		}
	}
	return retorno;

}

int arr_calcularPromedioInt(int* array,int limite, float* resultado)
{
	int retorno=-1;
	//int bufferInt;
	int acumuladorEdades=0;
	if(array != NULL && resultado != NULL && limite > 0)
	{
	for(int i=0;i<limite;i++)
	{
    acumuladorEdades= acumuladorEdades + array[i];
    retorno=0;
	}

	*resultado= (float)acumuladorEdades/limite;

	return retorno;
	}




    return retorno;
}

int arr_sumarNumeros(int* array,int limite, float* resultado)
{
	int retorno=-1;
	//int bufferInt;
	int acumuladorEdades=0;
	if(array != NULL && resultado != NULL && limite > 0)

	//bufferInt= array[0];

	for(int i=0;i<limite;i++)
	{
    acumuladorEdades= (float)acumuladorEdades + array[i];
	}

	*resultado=acumuladorEdades;

	retorno = 0;



    return retorno;
}

int utn_getFloat(float* pResultado,char* mensaje, char*mensajeError,float minimo,float maximo, int reintentos)
{
	int retorno=-1;
	float bufferFloat;
	if(pResultado !=NULL && mensaje !=NULL && mensajeError !=NULL && minimo <= maximo && reintentos >=0)
	{
		do
		{
			 printf("%s",mensaje);
			 fflush(stdin);
			 scanf("%f",&bufferFloat);
			 if(bufferFloat >= minimo && bufferFloat <= maximo)
			 {
				 *pResultado = bufferFloat;
				 retorno = 0;
				 break;
			 }
			 else
			 {
				 printf("%s", mensajeError);
				 reintentos--;
			 }
	    }while(reintentos >= 0);

	}
	return retorno;
}



int utn_getChar(char* pResultado,char* mensaje, char*mensajeError,char minimo,char maximo, int reintentos)
{
	int retorno=-1;
	char bufferChar;
	if(pResultado !=NULL && mensaje !=NULL && mensajeError !=NULL && minimo <= maximo && reintentos >=0)
	{
		do
		{
			 printf("%s",mensaje);
			 fflush(stdin);
			 scanf("%c",&bufferChar);
			 if(bufferChar >= minimo && bufferChar <= maximo)
			 {
				 *pResultado = bufferChar;
				 retorno = 0;
				 break;
			 }
			 else
			 {
				 printf("%s", mensajeError);
				 reintentos--;
			 }
	    }while(reintentos >= 0);

	}
	return retorno;
}


int printArrayInt(int* pArray,int limite)
{
	int retorno = -1;
	int i;

	if(pArray != NULL && limite >= 0)
	{
		retorno = 0;
		for(i=0;i<limite;i++)
		{
			printf( "%d ",pArray[i]);
		}
	}
	return retorno;
}


int ordenarArrayInt(int* pArray, int limite)
{
	int flagSwap;
	int i;
	int contador=0;
	int retorno= -1;
	int bufferInt;

	if(pArray != NULL && limite >=0)
	{
		do
		{
			flagSwap = 0;
			limite--;
			for(i=0;i<limite;i++)
			{
				if(pArray[i] < pArray[i+1])
				{
					flagSwap = 1;
					bufferInt=pArray[i];
					pArray[i]=pArray[i+1];
					pArray[i+1]=bufferInt;
				}
				contador++;
			}
		}while(flagSwap);
		retorno = contador;
	}

	return retorno;
}


int conversorALibra(int* pArray,int limite,float*resultado)
{
	int retorno=-1;
	int buffer;
	int i;

	if(pArray !=NULL && resultado!=NULL && limite>0)
	{


for(i=0;i<limite;i++)
{

			buffer=pArray[i] * 2.205;

		    *resultado=buffer;
			retorno= 0;
}
	}



	return retorno;
}
