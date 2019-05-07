/*
 ============================================================================
 Name        : meanArray2.c
 Author      : David Procter
 Version     : 003
 Copyright   : Copyright - David Procter
 Description : Computer Lab Week 8 Tasks, mean integer function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float meanArray2(float (*myA2)[3])  {

	float num=0;
	int numCnt=0;
	//float num2=0;

	//num2= *myA2;

	printf(" Number in meanArray2: %f\n", myA2[0][0]);
	//printf(" Number in meanArray2: %d \n", y);
	//num1=x;
	for (int a=0; a<3; a++){
		for (int b=0; b<3; b++){
			num = num + myA2[a][b];
			numCnt++;
		}

	}
	printf(" Number in meanArray2: %f \n", num);
	num=num/(float)numCnt;
	printf(" Number in meanArray2: %d \n", numCnt);
	printf(" Number in meanArray2: %f \n", num);
	return num;
}
