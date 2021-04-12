/*
 HEADERS FUNCIONES BIBLIOTECAS
 */

#ifndef ARRAY_H_
#define ARRAY_H_
int arr_calcularMaximoInt(int array[],int limite, int* resultado);
int arr_calcularMinimoInt(int* array,int limite, int* resultado);
int arr_calcularPromedioInt(int* array,int limite, float* resultado);
int utn_getNumero(int* pResultado,char* mensaje, char*mensajeError,int minimo,int maximo, int reintentos);
int arr_sumarNumeros(int* array,int limite, float* resultado);
int utn_getFloat(float* pResultado,char* mensaje, char*mensajeError,float minimo,float maximo, int reintentos);
int utn_getChar(char* pResultado,char* mensaje, char*mensajeError,char minimo,char maximo, int reintentos);
int printArrayInt(int* pArray,int limite);
int ordenarArrayInt(int* pArray, int limite);
int conversorALibra(int* pArray,int limite,float*resultado);





#endif /* ARRAY_H_ */
