/*
Fun��o: Calcular �rea do tri�ngulo
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float area = 0, base = 0, altura = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o n�mero correspondente a base do seu tri�ngulo: \n");
	scanf ("%f", &base);
	printf ("Insira o n�mero correspondente a altura do seu tri�ngulo: \n");
	scanf ("%f", &altura);
	area = (base * altura) / 2;
	printf ("A �rea do seu tri�ngulo �: %f m� \n", area);
	system("pause");
}
