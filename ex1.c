// Escreva um algoritmo que calcule e mostre a potência de um determinado número somente usando o
// operador de multiplicação.

#include <stdio.h>

int calculando(){
	int num = 3, num2 = 3;
	int pot = 0;

	pot = num;
    for (int i = 1; i < num2; i++ ){ // Comeca em 1 pois 'pot' ja foi inicializado
        pot *= num; 
    }
    return pot;
}

void main(){
	int pot = calculando(pot);

	printf("O resultado é: %d\n", pot);
}

