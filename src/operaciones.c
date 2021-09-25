/*
 * operaciones.c
 *
 *  Created on: 19 sep. 2021
 *      Author: facun
 */

#include <stdio.h>
#include <stdlib.h>


float sumar(float numUno, float numDos)
{
		int suma;
		suma=numUno+numDos;
		return suma;
}

float restar(float numUno, float numDos)
{
		int resta;
		resta=numUno-numDos;
		return resta;
}

int dividir(float dividendo,float divisor,float* pResulato)
{
		int estado;

		if(divisor!=0){
			estado=0;
			*pResulato=dividendo/divisor;
		}
		else{
			estado=-1;
		}

		return estado;
}

int multiplicar(float multiplicando, float multiplicador)
{
		float resultado;
		resultado=multiplicando*multiplicador;
		return resultado;

}


void pedirFloatAUsuario(float* pResultado, char* variableTexto)
{

		printf("%s",variableTexto);
		scanf("%f",pResultado);

}

int factorial(int numeroUno)
{

	int i=0;
	int acumulador;

	acumulador=numeroUno;

	for(i=1;i<numeroUno;i++){

		acumulador=acumulador*(numeroUno-(i));

	}

	return acumulador;

}

void pedirIntAUsuario(int* pResultado, char* variableTexto)
{

		printf("%s",variableTexto);
		scanf("%d",pResultado);

}

