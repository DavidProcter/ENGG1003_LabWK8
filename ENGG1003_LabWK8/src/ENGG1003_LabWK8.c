/*
 ============================================================================
 Name        : ENGG1003_LabWK8.c
 Author      : David Procter
 Version     : 000
 Copyright   : Copyright - David Procter
 Description : Computer Lab Week 8 Tasks.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void zeroInt(int *x);
void swap(int *x, int *y);

int main (){

	int a=15, b=45, c=18, *p1, *p2, *p3;

		printf(" Number a: %d \n", a);
		printf(" Number b: %d \n\n", b);

	p1=&a;
	p2=&b;
	p3=&c;


	swap(p1,p2);

		printf(" Number a: %d \n", a);
		printf(" Number b: %d \n\n", b);

	zeroInt(p1);

		printf(" Number a: %d \n", a);
		printf(" Number b: %d \n", b);

	return 0;
	}

