#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
	Retorna um inteiro baseado em um numero romano.
	@param romano uma string qualquer.
	@return um inteiro equivalente em romano.
*/
int converte_romano(const char romano[]){
	int i=0;	
	while(romano[i]!=0){
		if((romano[i]!='I')&&(romano[i]!='V')&&(romano[i]!='X')&&(romano[i]!='L')&&(romano[i]!='C')&&(romano[i]!='D')&&(romano[i]!='M'))
			return -1;
		else
			i++;
		}
	return 0;
}

/**
	@file
	@brief esse arquivo contém a implementação da função.
*/
