/*
 * main.c
 *
 *  Created on: 8 abr. 2021
 *      Author: sergi
 */


#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
	char str[100];
	printf("Introdueix la cadena: ");
	scanf("%[^\n]s", str);
	insertData(str);
}
