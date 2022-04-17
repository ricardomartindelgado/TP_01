/*
 * utn_input.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Smaythink
 */

#ifndef UTN_INPUT_H_
#define UTN_INPUT_H_


// VALIDACION
int utn_getInt(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int utn_getFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);
int utn_getChar(char* pResultado, char* mensaje, char* mensajeError, char minimo, int maximo, int reintentos);

#endif /* UTN_INPUT_H_ */
