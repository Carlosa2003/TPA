/*
Fun��o: Calcular a soma de tr�s n�meros, e o quadrado desse soma
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int num1 = 0, num2 = 0, num3 = 0, soma = 0, quadrado = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o primeiro n�mero: \n");
	scanf ("%i", &num1);
	printf ("Insira o segundo n�mero: \n");
	scanf ("%i", &num2);
	printf ("Insira o terceiro n�mero: \n");
	scanf ("%i", &num3);
	soma = (num1 + num2 + num3);
	quadrado = soma * soma;
	printf ("A soma dos tr�s n�meros indicados �: %i\n", soma);
	printf ("O quadrado da soma dos tr�s n�meros indicados �: %i\n", quadrado);
	system("pause");
}
