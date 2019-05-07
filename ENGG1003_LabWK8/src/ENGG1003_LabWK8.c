/*
 ============================================================================
 Name        : ENGG1003_LabWK8.c
 Author      : David Procter
 Version     : 001
 Copyright   : Copyright - David Procter
 Description : Computer Lab Week 8 Tasks.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void zeroInt(int *x);
void swapInt(int *x, int *y);
void meanInt(int *x, int *y, int *z);

float meanArray(float *myA, int t);

float myArray1[3]    = { 0.1, 0.2, 0.3 };
float myArray2[3][3] = { { 0.1, 0.2, 0.3 }, { 1.1, 1.2, 1.3 }, { 2.1, 2.2, 2.3 } };


int main (){

	int a=15, b=45, c=18, *p1, *p2, *p3;
	int item=4;
	float returnValue = 0;
	float this = 15.9876;

	//myA = *myArray1;

		printf(" Number a: %d \n", a);
		printf(" Number b: %d \n", b);
		printf(" Number b: %d \n", c);
		printf(" Number c: %f \n\n", this);
		printf(" myArray1 is:\n");
		printf("%f,%f,%f\n", myArray1[0], myArray1[1], myArray1[2]);
		printf("\n myArray2 is:\n");
		for (int cnt=0; cnt < 3; cnt++) {
			printf("%f,%f,%f\n", myArray2[cnt][0], myArray2[cnt][1], myArray2[cnt][2]);
		}
		printf("\n");

	p1=&a;
	p2=&b;
	p3=&c;

	switch(item) {
	case 1:
		swapInt(p1,p2);
		printf(" Number a: %d \n", a);
		printf(" Number b: %d \n\n", b);
		break;
	case 2:
		zeroInt(p1);
		printf(" Number a: %d \n", a);
		printf(" Number b: %d \n\n", b);
		break;
	case 3:
		meanInt(p1,p2,p3);
		printf(" Number a: %d \n", a);
		printf(" Number b: %d \n", b);
		printf(" Number c: %d \n\n", c);
		break;
	case 4:
		returnValue = meanArray( myArray1, b);
		printf(" Number return: %f \n\n", returnValue);
		break;
	}


	return 0;
	}

