/*
 ============================================================================
 Name        : labArray1.c
 Author      : David Procter
 Version     : 001
 Copyright   : Copyright - David Procter
 Description : Computer Lab Week 8 Tasks, file I/O
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int labArray1(int (*myA4)[3])  {

	int num=0;
	int x=0, y=0;


	//printf(" Number in meanArray2: %d\n", myA4[0][0]);

	for (int a=0; a<3; a++){
		for (int b=0; b<3; b++){
			if (myA4[a][b] > num){
				num=myA4[a][b];
				x=a;
				y=b;
			}
		}
	}
	printf(" Largest Number is: %d \n", num);
	printf(" At array index: %d:%d \n", x, y);

	return num;
}
