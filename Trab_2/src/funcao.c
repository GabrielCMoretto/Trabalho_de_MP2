#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
	Compara dois números baseados nos caractéres romanos e compara para fazer uma operação satisfatória.
	Falta ainda implementar mais excessões para o código, porém o tempo é curto.
	@param um número que vai ser analisado, o seu antecessor na string, e número adquirido anteriormente por essa função.
	@return um inteiro que satisfaz a operação da combinação de dois números.
*/
int compara(int numero, int ultimo, int ultimo_numero){
	if(ultimo>numero)
		return ultimo_numero-numero;
	else
		return ultimo_numero+numero;
}
/**
	Retorna um inteiro baseado em um número romano. O algoritmo lê a string de trás para frente e identifica a letra,
	depois, ele chama a função compara para fazer uma operação satisfatória em como se lê os números romanos. Ele também
	identifica se há uma letra diferente das aceitas, nesse caso, a função retorna -1. A função também retorna -1 caso o
	número seja maior que 3000 ou menor que zero. 
	@param uma string qualquer.
	@return um inteiro equivalente em romano.
*/
int converte_romano(const char romano[]){
	int i=0;
	int num_anterior=0;
	int numero=0;
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
			default:
				return -1;
				break;	
		}	
	}
	if((numero>3000)||(numero<0))
		return -1;
	else
		return numero;
}

/**
	@file
	@brief esse arquivo contém a implementação da função.
*/

