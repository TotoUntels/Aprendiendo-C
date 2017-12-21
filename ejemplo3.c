#include<stdio.h>

char nombre[10];
char apellido[10];
char edad[3];
char pais[10];

void main()
{
	printf("Ingrese nombre: \n");
	scanf("%s",nombre);

	printf("ingrese apellido: \n");
	scanf("%s",apellido);

	printf("ingrese edad: \n");
	scanf("%s",edad);

	printf("Ingrese pais: \n");
	scanf("%s",pais);

	printf("Hola Sr.%s %s tu edad es: %s , y estás en: %s \n",nombre, apellido, edad, pais);
}
