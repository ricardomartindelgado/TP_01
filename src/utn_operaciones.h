/*
 * utn_operaciones.h
 *
 *  	Created on: XX abr. 2022
 *      Author: Martin Delgado
 */

#ifndef UTN_OPERACIONES_H_
#define UTN_OPERACIONES_H_

#include <stdio.h>
#include <stdlib.h>


int utn_sumarInt(int operador1, int operador2);
int utn_restarInt(int operador1, int operador2);
int utn_multiplicarInt(int operador1, int operador2);
int utn_dividirInt(float* resultado, int operador1, int operador2);


int utn_restarValorAbsoluto(float* pResultado, float operador1, float operador2);
int utn_calcularReglaDeTres(float operadorA, float operadorB, float operadorC, float* pResultado);


#endif /* UTN_OPERACIONES_H_ */
