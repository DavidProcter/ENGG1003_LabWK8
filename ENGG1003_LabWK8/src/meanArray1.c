/*
 ============================================================================
 Name        : meanArray1.c
 Author      : David Procter
 Version     : 003
 Copyright   : Copyright - David Procter
 Description : Computer Lab Week 8 Tasks, mean integer function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float meanArray1(float *myA1, int t) {

	float num=0;
	int num1=0;
	float num2=0;

	num2= myA1[2];

	printf(" Number in meanArray1: %f \n", *myA1);
	printf(" Number in meanArray1: %f \n", num2);
	num1=t;
	for (int a=0; a<t; a++){
		num = num + myA1[a];
	}
	num=num/t;
	printf(" Number in meanArray1: %d \n", num1);
	printf(" Number in meanArray1: %f \n", num);
	return num;
}
