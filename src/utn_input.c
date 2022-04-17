/*
 * utn_input.c
 *
 * 		 Created on: XX abr. 2022
 *      Author: Martin Delgado
 */



#include <stdio.h>
#include <stdlib.h>


/**
 * @fn int utn_getInt(int*, char*, char*, int, int, int)
 * @brief
 *
 * @param pResultado
 * @param mensaje
 * @param mensajeError
 * @param minimo
 * @param maximo
 * @param reintentos
 * @return
 */
int utn_getInt(	int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt;

	if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo < maximo && reintentos >= 0)
	{
		do
		{
			printf("%s", mensaje);
			scanf("%d", &bufferInt);

			if(minimo <= bufferInt && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s >> Reintentos = %d \n", mensajeError, reintentos);
				reintentos --;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}


/**
 * @fn int utn_getFloat(float*, char*, char*, float, float, int)
 * @brief
 *
 * @param pResultado
 * @param mensaje
 * @param mensajeError
 * @param minimo
 * @param maximo
 * @param reintentos
 * @return
 */
int utn_getFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
{
	int retorno = -1;
	float bufferFloat;

	if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo < maximo && reintentos >= 0)
	{
		do
		{
			printf("%s", mensaje);
			fflush(stdin); //Windows
			scanf("%f", &bufferFloat);
			if(minimo <= bufferFloat && bufferFloat <= maximo)
			{
				*pResultado = bufferFloat;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s >> Reintentos = %d \n", mensajeError, reintentos);
				reintentos --;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}


/**
 * @fn int utn_getChar(char*, char*, char*, char, int, int)
 * @brief
 *
 * @param pResultado
 * @param mensaje
 * @param mensajeError
 * @param minimo
 * @param maximo
 * @param reintentos
 * @return
 */
int utn_getChar(char* pResultado, char* mensaje, char* mensajeError, char minimo, int maximo, int reintentos)
{
	int retorno = -1;
	char bufferChar;

	if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo < maximo && reintentos >= 0)
	{
		do
		{
			printf("%s", mensaje);
			fflush(stdin); //Windows
			//fpurge(stdin); //Mac
			//__fpurge(stdin); //Linux >> #include <stdio_ext.h>
			scanf("%c", &bufferChar);

			if(minimo <= bufferChar && bufferChar <= maximo)
			{
				*pResultado = bufferChar;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s >> Reintentos = %d \n", mensajeError, reintentos);
				reintentos --;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}
