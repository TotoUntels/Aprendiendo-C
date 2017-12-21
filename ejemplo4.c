#include<stdio.h>


void main() {
	float Practicas, Parcial, Final, otros, Prom;
	printf("Ingrese promedio de practicas: \n");
	scanf("%f",&Practicas);
	printf("Ingrese promedio de Parcial: \n");
        scanf("%f",&Parcial);
	printf("Ingrese promedio de Final: \n");
        scanf("%f",&Final);
	printf("Ingrese promedio de otros: \n");
        scanf("%f",&otros);

	Prom = Practicas*30/100 + Parcial*30/100 + Final*30/100 + otros*10/100;

	printf("tu promedio es: %f \n", Prom);
}

