/*
 ============================================================================
 Name        : TrabajoPractico_01.c
 Author      : Martin Delgado
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_input.h"
#include "utn_operaciones.h"
#include "utn_agencia.h"




#include <stdio.h>
#include <stdlib.h>
#include "utn_input.h"
#include "utn_operaciones.h"
#include "utn_agencia.h"



int main(void) {

	setbuf(stdout, NULL); //Windows
	system("title Agencia de Viajes"); //Windows Console


	int opcion;
	float kilometros = 0;


	float precioAerolinasUsuario = -1;
	float precioAerolinasUnitario = -1;
	float precioAerolinasDebito = -1;
	float precioAerolinasCredito = -1;
	float precioAerolinasBitcoin = -1;


	float precioLatamUsaurio = -1;
	float precioLatamUnitario = -1;
	float precioLatamDebito = -1;
	float precioLatamCredito = -1;
	float precioLatamBitcoin = -1;

	float diferenciaDePrecio;

	int kilometrosRetornoValido =-1;
	int precioAerolinasRetornoValido=-1;
	int precioLatamRetornoValido=-1;







	do {

		agencia_imprimirMenuOpcionesSeis(kilometros, precioAerolinasUsuario, precioLatamUsaurio);

		//REINTENTO SETEO EN 0 PORQUE EL DO-WHILE YA ME DA ESTE SERVICIO
		//SI NO VALIDO OPCION PUEDE VENIR CARGADA CON BASURA SI NO LA INICIALIZE
		if (!utn_getInt(&opcion, "Ingrese una opcion ", " >> Opcion Invalida", 1, 6, 0))
		{
			//debugBegin
			printf("\n>> Numero recibido: %d", opcion);
			//debugEnd
			switch (opcion)
			{
				case 1: // INGRESAR KILOMETROS
					printf("\n>> swithc: Opcion 1\n");
					kilometrosRetornoValido = utn_getFloat(&kilometros, "\nIngrese kilometros: ", "Numero invalido", 1, KILOMETROS_MAX, 2);
					break;


				case 2: // INGRESAR PRECIO DE VUELOS
					printf("\n>> Opcion 2\n");
					precioAerolinasRetornoValido = utn_getFloat(&precioAerolinasUsuario, "\nIngrese precio Aerolinas: ", "Numero invalido", 1, PRECIO_MAX, 2);
					printf("\n>> Precio ingresado: %.2f\n", precioAerolinasUsuario);
					precioLatamRetornoValido = utn_getFloat(&precioLatamUsaurio, "\nIngrese precio Latam: ", "Numero invalido", 1, PRECIO_MAX, 2);
					printf("\n>> Precio ingresado: %.2f\n", precioLatamUsaurio);
					break;


				case 3: // CALCULAR TODOS LOS COSTOS
					printf("\n>> Opcion 3\n");
					if ( !kilometrosRetornoValido && !precioAerolinasRetornoValido && !precioLatamRetornoValido)
					{
						printf("\n>> SI PUEDO Opcion 3 dentro del ..IF..   kilometros+precio\n");

						agencia_calcularTodo(kilometros, precioAerolinasUsuario, &precioAerolinasDebito, &precioAerolinasCredito, &precioAerolinasBitcoin, &precioAerolinasUnitario);


						//	 a) Tarjeta de débito (descuento 10%)
						//	 b) Tarjeta de crédito (interés 25%)
						//	 c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
						//	 d)  precio por km (precio unitario)
						//	 e)  diferencia de precio ingresada (Latam - Aerolíneas)






					}
					else
					{
						printf("\n>> NO PUEDO Opcion 3 dentro del ..ELSE.. kilometros+precio\n");
					}


//					valor = agencia_calcularDebito(DEBITO_DESCUENTO_MAX, precioAerolinas, DEBITO_DESCUENTO, &pResultado);
//
//					if ( 0 == valor)
//					{
//						printf("\n pude hacer el debito -  valor es: %.2f y salio con: %d", pResultado, valor);
//					}
//					else
//					{
//						printf("\nNo se pudo realizar esta operacion");
//					}
//
//					//debugBegin
//					printf("\n>> descuento %f", resulDescuento);
//					printf("\n>> interes %f", resulInteres);
//					//debugEnd
					break;

				case 4: // INFORMAR
					printf("\n>> Opcion 4\n");
					//system("cls"); //Windows Console

					//FALTA INFORMAR SOLO SI TENGO DATOS CARGADOS

					agencia_imprimirInforme("AEROLINAS", precioAerolinasUsuario, precioAerolinasDebito, precioAerolinasCredito, precioAerolinasBitcoin, precioAerolinasUnitario);
					agencia_imprimirInforme("LATAM", precioLatamUsaurio, precioLatamDebito, precioLatamCredito, precioLatamBitcoin, precioLatamUnitario);

					utn_restarValorAbsoluto(&diferenciaDePrecio, precioAerolinasUnitario, precioLatamUnitario);
					printf("\n>> La diferencia de precio es: %.2f", diferenciaDePrecio);
					continue;
					break;

				case 5: //	CARGA FORZADA DE DATOS
					printf("\n>> Opcion 5\n");
					kilometros = 7090;
					precioAerolinasUnitario = 162965;
					precioLatamUnitario = 159339;

					//	CALCULAR TODOS LOS COSTOS
					// 	INFORMAR IMPRIMIR

					break;
			}
		}
		//system("cls"); //Windows Console
	} while (opcion != 6);


	return EXIT_SUCCESS;
}




//
//	//PRUEBA FUNCIONES
//	float pResultado;
//	int valor;
//
//	printf("\n>> pResultado MAIN valor: %f y direccion %p", pResultado, &pResultado);
//
//	valor = agencia_calcularDebito(DEBITO_DESCUENTO_MAX, 70, DEBITO_DESCUENTO, &pResultado);
//
//	if ( 0 == valor)
//	{
//		printf("\n pude hacer el debito -  valor es: %.2f y salio con: %d", pResultado, valor);
//	}
//	else
//	{
//		printf("\nNo se pudo realizar esta operacion");
//	}
