
#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Problema 1: Calcular o delta = b² - 4*a*c de uma
equação do segundo grau.
*/

int main(){
            double a, b, c, delta; // Declaracao de variaveis
            printf("***********************************************************************************\n");
            printf("Programa que calcula equacoes do 2 grau descobrindo o delta!\n");
            printf("***********************************************************************************\n");
            printf("Por favor, digite os coeficiente para a equacao do 2 grau (a, b, c): ");
            scanf("%lf %lf %lf", &a, &b, &c);
            delta = pow(b, 2) - 4 * a * c; //A fórmula de Bhaskara 
            printf("***********************************************************************************\n");
            printf("O valor de delta e: %.2lf\n", delta);
            return 0;
            }
