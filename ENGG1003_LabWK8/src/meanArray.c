/*
 ============================================================================
 Name        : meanArray.c
 Author      : David Procter
 Version     : 002
 Copyright   : Copyright - David Procter
 Description : Computer Lab Week 8 Tasks, mean integer function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float meanArray(float *myA, int t) {

	float num=55.98;
	int num1=0;
	float num2=0;

	num2= myA[2];

	printf(" Number in meanArray: %f \n", *myA);
	printf(" Number in meanArray: %f \n", num2);
	num1=t;
	printf(" Number in meanArray: %d \n", num1);
	printf(" Number in meanArray: %f \n", num);
	return num;
}
