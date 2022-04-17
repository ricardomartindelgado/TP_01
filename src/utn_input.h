/*
 * utn_input.h
 *
 *  	Created on: XX abr. 2022
 *      Author: Martin Delgado
 */

#ifndef UTN_INPUT_H_
#define UTN_INPUT_H_


// VALIDACION
/**
 * @fn int utn_getInt(int*, char*, char*, int, int, int)
 * @brief Valida que el numero este comprendido en rango
 *
 * @param pResultado Me devuelve el numero validado
 * @param mensaje Le pide al usuario un numero
 * @param mensajeError Le avisa al usuario que el numero ingresado no es correcto
 * @param minimo Numero minimo aceptado
 * @param maximo Numero maximo aceptado
 * @param reintentos Cantidad de veces que solicita un numero antes de salir de la funcion
 * @return retorno 0 i salio OK, 1 si salio MAL
 */


int utn_getInt(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
/**
 * @fn int utn_getInt(int*, char*, char*, int, int, int)
 * @brief Valida que el numero este comprendido en rango
 *
 * @param pResultado Me devuelve el numero validado
 * @param mensaje Le pide al usuario un numero
 * @param mensajeError Le avisa al usuario que el numero ingresado no es correcto
 * @param minimo Numero minimo aceptado
 * @param maximo Numero maximo aceptado
 * @param reintentos Cantidad de veces que solicita un numero antes de salir de la funcion
 * @return retorno 0 i salio OK, 1 si salio MAL
 */


int utn_getFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);
/**
 * @fn int utn_getInt(int*, char*, char*, int, int, int)
 * @brief Valida que el numero este comprendido en rango
 *
 * @param pResultado Me devuelve el numero validado
 * @param mensaje Le pide al usuario un numero
 * @param mensajeError Le avisa al usuario que el numero ingresado no es correcto
 * @param minimo Numero minimo aceptado
 * @param maximo Numero maximo aceptado
 * @param reintentos Cantidad de veces que solicita un numero antes de salir de la funcion
 * @return retorno 0 i salio OK, 1 si salio MAL
 */
int utn_getChar(char* pResultado, char* mensaje, char* mensajeError, char minimo, int maximo, int reintentos);

#endif /* UTN_INPUT_H_ */
