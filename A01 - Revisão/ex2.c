// Escreva um algoritmo que dado um número inteiro positivo mostre sua ordem inversa.
// Obs.: Não usar strings

#include <stdio.h>

void ordemInversa(){
	int n = 10;

	for(int i = n; i > 0; i--){
		printf("%d\t", i);
	}

}
void main(){

	ordemInversa();
	printf("\n");
}