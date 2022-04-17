/*
 * utn_agencia.h
 *
 *  Created on: XX abr. 2022
 *      Author: Martin Delgado
 */

#ifndef UTN_AGENCIA_H_
#define UTN_AGENCIA_H_



#define DEBITO_DESCUENTO 10			//DE CERO A 100%
#define DEBITO_DESCUENTO_MAX 100	//DE CERO A 100%
#define CREDITO_INTERES	25			//DE CERO A 100%
#define CREDITO_INTERES_MAX 100		//DE CERO A 100%
#define PRECIO_MAX 1000000 			//DE CERO A 1000000
#define BITCOIN 1
#define PESOSBITCOIN 4606954.55		//COTIZACION AL DIA 16/04/2022
#define KILOMETROS_MAX 40075		//CIRCUNFERENCIA DE LA TIERRA
									//(Ruta mas larga act 2017: Dubái - Auckland: 14.200 km)




void agencia_imprimirMenuOpcionesSeis(float kilometros, float precioAerolinas, float precioLatam);
int agencia_calcularDebito(float operadorA, float porcentajeMaximo, float porcentajeCalcular, float* pResultado);
void agencia_imprimirInforme(char* nombre, float precioUnitario, float debito, float credito, float bitcoin, float unitario);
int agencia_calcularTodo(float kilometros, float precioUsuario, float* precioDebito, float* precioCredito, float* precioBitcoin, float* precioUnitario);




#endif /* UTN_AGENCIA_H_ */
