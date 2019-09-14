/*
 * FUSE.h
 *
 *  Created on: Sep 8, 2019
 *      Author: agus
 */

#ifndef FUSE_H_
#define FUSE_H_

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include <biblioteca/sockets.h>
#include <biblioteca/serializacion.h>
#include <biblioteca/mensajes.h>
#include <biblioteca/enumsAndStructs.h>
#include <biblioteca/logs.h>
#include <biblioteca/levantarConfig.h>
#include <biblioteca/utils.h>

#include <commons/string.h>
#include <commons/collections/list.h>
#include <commons/collections/node.h>
#include <commons/collections/queue.h>
#include <commons/collections/dictionary.h>
#include <commons/bitarray.h>

#define pathConfig "/home/utnso/workspace/tp-2019-2c-Testigos-de-Stallings/FUSE/config/configuracion.txt"

char ip[46];
char puerto[10];

/*
 * Levanta los datos de la estructura config y los guarda en las variables globales que corresponda
 */
void levantarConfig();


/*
 * Para el servidor:
 * 1) Se crea un socket servidor que siempre estara a la escucha de nuevas conexiones
 * 2) Se crea un socket respuesta donde se acepta una conexion
 * 3) Se crea un hilo que recibe el socket de la conexion por parametro -> esto es lo que provoca la concurrencia y la necesidad de sincronizar
 * 4) Se reciben los datos pertinentes y se responde como se crea necesario (siempre usando el socket rta para enviar/recibir)
 *
 */
void levantarServidorFUSE();
void rutinaServidor(int socketRespuesta);

/*
 * Libera variables globales y memoria alocada que normalmente no se libera. -> Ver de usar signal para atrapar una salida forzada
 */
void liberarVariablesGlobales();


#endif /* FUSE_H_ */
