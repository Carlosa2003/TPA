/*
Fun��o: Calcular �rea do ret�ngulo
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int area = 0, base = 0, altura = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o n�mero correspondente a base do seu ret�ngulo: \n");
	scanf ("%i", &base);
	printf ("Insira o n�mero correspondente a altura do seu ret�ngulo: \n");
	scanf ("%i", &altura);
	area = base * altura;
	printf ("A �rea do seu ret�ngulo �: %i m� \n", area);
	system("pause");
}
