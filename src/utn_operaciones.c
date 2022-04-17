/*
 * utn_operaciones.c
 *
 *  Created on: XX abr. 2022
 *      Author: Martin Delgado
 */

#include <stdio.h>
#include <stdlib.h>


//	NOTA MENTAL: CONSIDERAR SI TIENE SENTIDO
//	NO VALIDO NADA Y PUEDO HACER ESTO DIRECTAMENTE EN EL MAIN
//	DEBERIA VALIDAR QUE EL INGRESO Y EL RESULTADO DE LAS
//	OPERACIONES NO DESBORDE MI VARIABLE
//	int utn_sumarInt(int operador1, int operador2)
//	{
//		return operador1+operador2;
//	}
//
//	int utn_restarInt(int operador1, int operador2)
//	{
//		return operador1-operador2;
//	}
//
//	int utn_multiplicarInt(int operador1, int operador2)
//	{
//		return operador1*operador2;
//	}


int utn_restarValorAbsoluto(float* pResultado, float operador1, float operador2)
{
	int retorno = -1;
	//float bufferFloat;
	if (pResultado != NULL)
	{
		if (operador1 > operador2)
		{
			*pResultado = operador1 - operador2;
			retorno = 1;
		}
		else if (operador1 < operador2)
		{
			*pResultado = operador2 - operador1;
			retorno = 2;
		}
		else
		{
			*pResultado = 0;
			retorno = 3;
		}
	}
	return retorno;
}



int utn_dividirInt(float* pResultado, int operador1, int operador2)
{
	int retorno = -1;
	if (pResultado != NULL && operador2 != 0)
	{
		*pResultado = (float)operador1/operador2;
		retorno = 0;
	}
	else
	{
		retorno = -1;
	}
	return retorno;
}



int utn_calcularReglaDeTres(float operadorA, float operadorB, float operadorC, float* pResultado)
{
	int retorno = -1;
	if (pResultado != NULL && operadorA != 0)
	{
		*pResultado = (operadorB/operadorA)*operadorC;
		retorno = 0;
	}
	return retorno;
}





