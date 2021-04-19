/*
 * main.c
 *
 *  Created on: 15 abr. 2021
 *      Author: sergi
 */

#include "functions.h"
#include <stdio.h>

void main(){
	int option = printMenu();
	executeOrder(option);
}
