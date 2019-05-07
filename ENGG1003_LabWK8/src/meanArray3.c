/*
 ============================================================================
 Name        : meanArray3.c
 Author      : David Procter
 Version     : 001
 Copyright   : Copyright - David Procter
 Description : Computer Lab Week 8 Tasks, mean integer function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float meanArray3(float (*myA3)[3][3])  {

	float num=0;
	int numCnt=0;


	printf(" Number in meanArray2: %f\n", myA3[0][0][0]);
	printf(" Number in meanArray2: %f\n", myA3[0][0][1]);
	printf(" Number in meanArray2: %f\n", myA3[0][0][2]);

	for (int a=0; a<3; a++){
		for (int b=0; b<3; b++){
			for (int c=0; c<3; c++){
			num = num + myA3[a][b][c];
			numCnt++;
			}
		}
	}

	printf(" Number in meanArray2: %f \n", num);
	num=num/(float)numCnt;
	printf(" Number in meanArray2: %d \n", numCnt);
	printf(" Number in meanArray2: %f \n", num);
	return num;
}
