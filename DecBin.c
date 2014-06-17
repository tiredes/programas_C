/*
 * decbin.c
 *
 *  Created on: 15/06/2014
 *      Author: Rodrigo Salvo
 * 
 * Programa em C para realizar a conversão de números decimais em binário.
 /

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 0, j;
	int vetor[100];
	int d;

	printf("\nEntre com um número decimal: ");
	scanf("%d", &d);

	 if (d == 0)
	     {
		  printf("\nNumero binário: \%d" ,d);
	      printf("\n\n");
	      exit (0);
	     }

	while (d != 0) {
		vetor[i] = (d % 2);
		d = d / 2;
		i++;
	}
	i--;
	printf("\n");

	printf("Numero binário: ");

	while (i >= 0) {

		printf("%d", vetor[i]);
		i--;
	}

printf("\n\n");
}
