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

int main (){

	int a=15, *p;

		printf("%d\n", a);

	p=&a;
	zeroInt(p);

		printf("%d\n", a);
		printf("%d\n", *p);
		printf("%p\n", p);

	}

