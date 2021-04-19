/*
 * functions.c
 *
 *  Created on: 8 abr. 2021
 *      Author: sergi
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void insertData(char *str){
	FILE *fp;
	fp = fopen("/home/uf3/act1.txt", "a+;");
	if(fp == 0){
		perror("Error...");
		exit(0);
	}
	else{
		fputs(str, fp);
	}
	fclose(fp);
}
