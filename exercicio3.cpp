/*
Fun��o: Calcular �rea da circunfer�ncia
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float PI = 3.14, raio = 0, area = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o n�mero correspondente ao raio da sua circunfer�ncia: \n");
	scanf ("%f", &raio);
	area = raio * raio * PI;
	printf ("A �rea do seu circunfer�ncia �: %f \n", area, "m�");
	system("pause");
}
