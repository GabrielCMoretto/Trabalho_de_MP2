#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compara(int numero, int ultimo, int ultimo_numero){
	if(ultimo>numero)
		return ultimo_numero-numero;
	else
		return ultimo_numero+numero;
}
/**
	Retorna um inteiro baseado em um numero romano.
	@param romano uma string qualquer.
	@return um inteiro equivalente em romano.
*/
int converte_romano(const char romano[]){
	int i=0;
	int num_anterior=0;
	int numero=0;	
	while(romano[i]!=0){
		if((romano[i]!='I')&&(romano[i]!='V')&&(romano[i]!='X')&&(romano[i]!='L')&&(romano[i]!='C')&&(romano[i]!='D')&&(romano[i]!='M'))
			return -1;
		else
			i++;
		}
	for(i=strlen(romano)-1;i>=0;i--){
		switch(romano[i]){
			
			case'I':
				numero=compara(1,num_anterior,numero);
				num_anterior=1;
				break;
			case'V':
				numero=compara(5,num_anterior,numero);
				num_anterior=5;
				break;
			case'X':
				numero=compara(10,num_anterior,numero);
				num_anterior=10;
				break;
			case'L':
				numero=compara(50,num_anterior,numero);
				num_anterior=50;
				break;
			case'C':
				numero=compara(100,num_anterior,numero);
				num_anterior=100;
				break;
			case'D':
				numero=compara(500,num_anterior,numero);
				num_anterior=500;
				break;
			case'M':
				numero=compara(1000,num_anterior,numero);
				num_anterior=1000;
				break;	
		}	
	}
	if(numero>3000)
		return -1
	else
		return numero;
}


/**
	@file
	@brief esse arquivo contém a implementação da função.
*/
