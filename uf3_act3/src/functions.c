/*
 * functions.c
 *
 *  Created on: 15 abr. 2021
 *      Author: sergi
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int printMenu(){
	int i;
	do{
		printf("Qué vols fer?\n1. Crear un fitxer.\n2. Mostrar el contingut d'un fitxer.\n3. Modificar el contingut d'un fitxer.\n4. Sortir.\n");
		scanf("%d", &i);
	}while(i < 1 || i > 4);
	return i;
}

void requestString(char *str, int n){
	switch(n){
	case 1:
		printf("Introdueix el nom del fitxer: ");
		scanf(" %[^\n]s", str);
		break;
	case 2:
		printf("Introdueix el text per afegir al document: ");
		scanf(" %[^\n]s", str);
	}
}

void createFile(){
	char str[20] , uri[50] = "files/";
	requestString(&str, 1);
	strcat(uri, str);
	FILE *fp;
	fp = fopen(uri, "w");
	if(fp == NULL){
		perror("Error!");
		exit(0);
	}
	fclose(fp);
}

void readFile(){
	char str[20] , uri[50] = "files/", text[200];
	requestString(&str, 1);
	strcat(uri, str);
	FILE *fp;
	fp = fopen(uri, "r");
	if(fp == NULL){
		perror("Error!");
		exit(0);
	} else {
		fscanf(fp, "%s", text);
		printf("%s", text);
	}
	fclose(fp);
}

void addContent(){
	char str[20] , uri[50] = "files/", text[200];
	requestString(&str, 1);
	strcat(uri, str);
	FILE *fp;
	fp = fopen(uri, "a");
	if(fp == NULL){
		perror("Error!");
		exit(0);
	} else {
		requestString(&text, 2);
		fputs("\n", fp);
		fputs(text, fp);
		printf("Has afegit al text: \n%s", text);
	}
}

void executeOrder(int option){
	switch(option){
	case 1:
		createFile();
		break;
	case 2:
		readFile();
		break;
	case 3:
		addContent();
		break;
	case 4:
		break;
	}
}
