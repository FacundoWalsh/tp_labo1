/*
 ============================================================================
 Name        : tp_1.c
 Author      : Facundo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main(void) {



	setbuf(stdout,NULL);
	float a;
	float b;
	float resultadoSuma;
	float resultadoResta;
	int estadoDivision;
	float resultadoDivision;
	float resultadoMultiplicacion;
	int resutaldoFactorialA;
	int resultadoFactorialB;
	int opciones;
	int banderaX=0;
	int banderaY=0;
	int banderaCalcular=0;



	while(opciones!=5){

		if(banderaX==0 && banderaY==0){
			pedirIntAUsuario(&opciones, "1. Ingresar 1er operando (A=x)\n2. Ingresar 2do operando (B=y)\n3. Calcular todas las operaciones\n4. Informar resultados\n5. Salir\n");
		}

		if(banderaX==1 && banderaY==0){
			printf("1. Ingresar 1er operando (A=%f)\n2. Ingresar 2do operando (B=y)\n3. Calcular todas las operaciones\n4. Informar resultados\n5. Salir\n",a);
			scanf("%d",&opciones);
		}

		if(banderaX==0 && banderaY==1){
			printf("1. Ingresar 1er operando (A=x)\n2. Ingresar 2do operando (B=%f)\n3. Calcular todas las operaciones\n4. Informar resultados\n5. Salir\n",b);
			scanf("%d",&opciones);
		}

		if(banderaX==1 && banderaY==1){
			printf("1. Ingresar 1er operando (A=%f)\n2. Ingresar 2do operando (B=%f)\n3. Calcular todas las operaciones\n4. Informar resultados\n5. Salir\n",a,b);
			scanf("%d",&opciones);
		}

		switch(opciones){

				case 1:
					pedirFloatAUsuario(&a,"Ingresar 1er operando (A=x)\n");
					banderaX=1;
					banderaCalcular=0;

					break;
				case 2:
					pedirFloatAUsuario(&b,"Ingresar 2do operando (B=y)\n");
					banderaY=1;
					banderaCalcular=0;

					break;

				case 3:
					banderaCalcular=1;

					if(banderaX==0 && banderaY==0){
						printf("Tiene que cargar valores a los operandos A y B\n\n");
					}
					if(banderaX==1 && banderaY==0){
						printf("Tiene que cargar un valor en el 2do operando\n\n");
					}

					if(banderaX==0 && banderaY==1){
						printf("Tiene que cargar un calor en el 1er operando\n\n");
					}

					if(banderaX==1 && banderaY==1){
						printf("........\n    realizando calculos\n                   ........\n");
						resultadoSuma= sumar(a,b);
						resultadoResta= restar(a,b);
						estadoDivision=dividir(a,b,&resultadoDivision);
						resultadoMultiplicacion=multiplicar(a,b);
						resutaldoFactorialA=factorial(a);
						resultadoFactorialB=factorial(b);
					}

					break;
				case 4:
					if(banderaCalcular==0){
						printf("Antes debe realizar los calculos (Opcion 3)\n\n");
					}
					else{

						printf("  1)El resultado de A+B es:%f\n",resultadoSuma);
						printf("  2)El resultado de A-B es:%f\n",resultadoResta);
						if(estadoDivision==0){
							printf("  3(El resutado de A/B es:%f\n",resultadoDivision);
						}
						else{
							printf("  3)No es posible dividir por cero\n");
						}
						printf("  4)El resultado de A*B es:%f\n",resultadoMultiplicacion);
						printf("  5)El factorial de A es:%d y El factorial de B es:%d\n\n",resutaldoFactorialA,resultadoFactorialB);
					}

					break;

		}

	 }









 printf("fin");






	return EXIT_SUCCESS;
}
