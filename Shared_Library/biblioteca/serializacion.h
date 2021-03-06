#ifndef SERIALIZACION_H_
#define SERIALIZACION_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <commons/collections/list.h>
#include <stdint.h>

#include "logs.h"

/*
 * 	SERIALIZAR Y DESERIALIZAR DATOS PRIMITIVOS
 */

void serializarInt(void* buffer, int32_t entero, int* desplazamiento);
void serializarUint(void* buffer, uint32_t entero, int* desplazamiento);
void serializarDouble(void* buffer, int64_t numero, int* desplazamiento);
void serializarChar(void* buffer, char caracter, int* desplazamiento);
void serializarString(void* buffer, char* cadena, int* desplazamiento);
void serializarVoid(void* buffer, void* origen, int32_t cantidadBytes, int* desplazamiento);

void deserializarInt(void* buffer, int32_t* entero, int* desplazamiento);
void deserializarUint(void* buffer, uint32_t* entero, int* desplazamiento);
void deserializarDouble(void* buffer, int64_t* entero, int* desplazamiento);
void deserializarChar(void* buffer, char* caracter, int* desplazamiento);
void deserializarString(void* buffer, char** cadena, int* desplazamiento);
void deserializarVoid(void* buffer, void** dst, int cantidadBytes, int* desplazamiento);

#endif /* SERIALIZACION_H_ */
