/*
 * utn_agencia.c
 *
 *  Created on: XX abr. 2022
 *      Author: Martin Delgado
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_input.h"
#include "utn_operaciones.h"
#include "utn_agencia.h"


void agencia_imprimirMenuOpcionesSeis(float kilometros, float precioAerolinas, float precioLatam)
{
	printf("\n\tOpcion 1: Ingresar Kilometros         (KM = %.2f)", kilometros);
	printf("\n\tOpcion 2: Ingresar Precios de Vuelos  (Aerolíneas = $%.2f, Latam = $%.2f)", precioAerolinas, precioLatam);
	printf("\n\tOpcion 3: Calcular todos los costos");
	printf("\n\tOpcion 4: Informar");
	printf("\n\tOpcion 5: Carga forzada de datos");
	printf("\n\tOpcion 6: Salir\n\n");

}

void agencia_imprimirInforme(char* nombre, float precioUnitario, float debito, float credito, float bitcoin, float unitario)
{
	printf("\n\t   Precio %s: %.2f", nombre, precioUnitario);
	printf("\n\tA) Precio con tarjeta de debito: $%.2f", debito);
	printf("\n\tB) Precio con tarjeta de credito: $%.2f", credito);
	printf("\n\tC) Precio pagando con bitcoin: $%.2f BTC", bitcoin);
	printf("\n\tD) Precio unitario: $%.2f", unitario);
	printf("\n");

}


//void agencia_imprimirMenuOpcionesDos()
//{
//	printf("\n\tPrecio Vuelo Aerolineas", kilometros);
//	printf("\n\tPrecio Vuelo Latam", precioAerolinas, precioLatam);
//}


//int ingresarKilometros(float* pResultado)
//{
//	//validar num kilometros
//	int retorno = -1;
//	float bufferFloat;
//	//falta validar pResultado != NULL
//	if (!utn_getFloat(&bufferFloat, "Ingresar Kilometros: ", "Numero Invalido", 1, KILOMETROS_MAX, 2))
//	{
//		*pResultado = bufferFloat;
//		retorno = 0;
//	}
//	return retorno;
//}


//int ingresarPrecioVuelos(float* pResultadoAerolineas, float* pResultadoLatan)
//{
//	int retorno = -1;
//	float bufferFloatAerolineas;
//	float bufferLatan;
//	if ( ! (ingresarPrecio(&bufferFloatAerolineas) && ingresarPrecio(&bufferLatan)))
//	{
//		*pResultadoAerolineas = bufferFloatAerolineas;
//		*pResultadoLatan = bufferLatan;
//		retorno = 0;
//	}
//	return retorno;
//}


//int ingresarPrecio(float* pResultado)
//{
//	//validar num kilometros
//	int retorno = -1;
//	float bufferFloat;
//	//falta validar pResultado != NULL
//	if (!utn_getFloat(&bufferFloat, "Ingresar Precio: ", "Numero Invalido", 1, PRECIO_MAX, 2))
//	{
//		*pResultado = bufferFloat;
//		retorno = 0;
//	}
//	return retorno;
//}




int agencia_calcularTodo(float kilometros, float precioUsuario, float* precioDebito, float* precioCredito, float* precioBitcoin, float* precioUnitario)
{
	int retorno = -1;

	if (   ! utn_calcularReglaDeTres(DEBITO_DESCUENTO_MAX, precioUsuario, DEBITO_DESCUENTO, precioDebito)
		&& ! utn_calcularReglaDeTres(CREDITO_INTERES_MAX, precioUsuario+100, CREDITO_INTERES, precioCredito)
		&& ! utn_calcularReglaDeTres(PESOSBITCOIN, BITCOIN, precioUsuario, precioBitcoin)
		&& ! utn_calcularReglaDeTres(kilometros, precioUsuario, 1, precioUnitario)  )
	{
		retorno = 0;
	}

//	// 	DEBITO
//	utn_calcularReglaDeTres(DEBITO_DESCUENTO_MAX, precioUsuario, DEBITO_DESCUENTO, precioDebito);
//	//	CREDITO
//	utn_calcularReglaDeTres(CREDITO_INTERES_MAX, precioUsuario+100, CREDITO_INTERES, precioCredito);
//	// 	BITCOIN
//	utn_calcularReglaDeTres(PESOSBITCOIN, BITCOIN, precioUsuario, precioBitcoin);
//	//	PRECIO UNITARIO
//	utn_calcularReglaDeTres(kilometros, precioUsuario, 1, precioUnitario);

	return retorno;
}









//	NOTA: PARA CONSIDERAR
//	Q: 	ES NECESARIO CREAR UNA FUNCION PARA CADA CALCULAR TENIENDO
//		EN CUENTA QUE LA FUNCIONALIDAD POR DENTRO ES LA MIMA?
//	A: 	NO. PERO ES CIERTO QUE HARIA MAS FACIL LEER EL CODIGO. SI?
/**
 * @fn int agencia_calcularDebito(float, float, float, float*)
 * @brief
 *
 * @param operadorA
 * @param porcentajeMaximo
 * @param porcentajeCalcular
 * @param pResultado
 * @return
 */
//int agencia_calcularDebito(float operadorA, float porcentajeMaximo, float porcentajeCalcular, float* pResultado)
//{
//	int retorno = -1;
//	float bufferFloat;
//
//	//debugBegin
//	printf("\n>> pResultado agencia_calcularDebito valor: %f y direccion %p", pResultado, &pResultado);
//
//	//debugEnd
////	bufferFloat = *pResultado;
//
//	//debugBegin
//	printf("\n>> bufferFloat agencia_calcularDebito valor: %f y direccion %p", bufferFloat, &bufferFloat);
//
//	//debugEnd
//
//
//	if (pResultado != NULL && 0 <= porcentajeCalcular && porcentajeCalcular <= porcentajeMaximo)
//	{
//		if (!utn_calcularReglaDeTres(operadorA, porcentajeMaximo, porcentajeCalcular, &bufferFloat))
//		{
//			*pResultado = bufferFloat;
//			printf("\n>> IFFFFF bufferFloat: %f - pResultado: %f", bufferFloat, pResultado);
//			retorno = 0;
//
//		}
//	}
//
//	return 0;
//}

//
//int calcularCredito(float* pResultado, float ingreso, float porcentaje)
//{
//	int retorno = -1;
//	float bufferFloat;
//	if (pResultado != NULL && 0 <= porcentaje && porcentaje <= DEBITO_MAX)
//	{
//		if (!utn_calcularPorcentajeInteres(&pResultado, ingreso, porcentaje))
//		{
//			*pResultado = bufferFloat;
//			retorno = 0;
//		}
//	}
//	return retorno;
//}
//
//int calcularBitcoin(float* pResultado, float valorEntrada)
//{
//	int retorno = -1;
//	float bufferFloat;
//	if (pResultado != NULL)
//	{
//		if (!utn_calcularProporcion(&pResultado, valorEntrada, PESOS, BITCOIN))
//		{
//			*pResultado = bufferFloat;
//			retorno = 0;
//		}
//	}
//	return retorno;
//}
//
//
//int calcularPrecioPorKM(float* pResultado, float valorEntrada, float pesos, float kilomentros)
//{
//	int retorno = -1;
//	float bufferFloat;
//	if (pResultado != NULL)
//	{
//		if (!utn_calcularProporcion(&pResultado, valorEntrada, pesos, kilomentros))
//		{
//			*pResultado = bufferFloat;
//			retorno = 0;
//		}
//	}
//	return retorno;
//}
//
//

