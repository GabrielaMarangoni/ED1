/*O sistema de notas de algumas universidades são calculadas de acordo com a seguinte tabela:
Nota Conceito
Maior ou igual a 9.0 A
Maior ou igual a 7.0 e menor que 9.0 B
Maior ou igual a 6.0 e menor que 7.0 C
Menor do que 6.0 I (Insuficiente)
Escreva um algoritmo que dado uma nota, converta e mostre o seu conceito equivalente.*/

#include <stdio.h>

void conceito(){
	float nota = 5.9;

	if(nota >= 9.0) printf("Conceito A\n");
	else if(nota >= 6.0 && nota <= 7.0) printf("Conceito C\n");
	else if(nota <= 6.0) printf("Conceito  I\n");
}

void main(){
	conceito();
}

