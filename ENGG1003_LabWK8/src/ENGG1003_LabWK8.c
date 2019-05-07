/*
 ============================================================================
 Name        : ENGG1003_LabWK8.c
 Author      : David Procter
 Version     : 005
 Copyright   : Copyright - David Procter
 Description : Computer Lab Week 8 Tasks.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void zeroInt(int *x);
void swapInt(int *x, int *y);
void meanInt(int *x, int *y, int *z);

float meanArray1(float *myA1, int t);
float meanArray2(float (*myA2)[3]);
float meanArray3(float (*myA3)[3][3]);

int labArray1(int (*myA4)[3]);


int main (){

	float myArray1[3]    = { 0.1, 0.2, 0.3 };
	float myArray2[3][3] = { { 0.1, 0.2, 0.3 }, { 1.1, 1.2, 1.3 }, { 2.1, 2.2, 2.3 } };
	float myArray3[3][3][3];
	int myArray4[3][3];

	int a=15, b=45, c=18, *p1, *p2, *p3;
	int item=7;
	float returnValue = 0;
	float this = 1.142;
	float that = 1;
	FILE *input_file;

		for (int a=0; a<3; a++){
			for (int b=0; b<3; b++){
				for (int c=0; c<3; c++){
					myArray3[a][b][c]= this * that;
					that++;
				}
			}

		}


		printf(" Number a: %d \n", a);
		printf(" Number b: %d \n", b);
		printf(" Number b: %d \n", c);
		printf(" Number c: %f \n\n", this);
		printf(" myArray1 is:\n");
		printf("%f,%f,%f\n", myArray1[0], myArray1[1], myArray1[2]);
		printf("\n myArray2 is:");
		for (int cnt1=0; cnt1 < 3; cnt1++) {
			printf("\n");
			for (int cnt2=0; cnt2 < 3; cnt2++) {
				printf("(%d:%d)",cnt1,cnt2);
				printf("%f,", myArray2[cnt1][cnt2]);
			}
		}
		printf("\n\n");

		printf(" myArray3 is:");
		for (int a=0; a<3; a++){
			for (int b=0; b<3; b++){
				printf("\n");
				for (int c=0; c<3; c++){
					printf("(%d:%d:%d)",a,b,c);
					printf("%f,", myArray3[a][b][c]);

				}
			}
		}
		printf("\n\n");

	p1=&a;
	p2=&b;
	p3=&c;

	//for (item = 1 ; item <= 4 ; item++){


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
		returnValue = meanArray1( myArray1, 3);
		printf(" Number return: %f \n\n", returnValue);
		break;
	case 5:
		returnValue = meanArray2(myArray2);
		printf(" Number return: %f \n\n", returnValue);
		break;
	case 6:
		returnValue = meanArray3(myArray3);
		printf(" Number return: %f \n\n", returnValue);
		break;
	case 7:
		input_file = fopen("2D_Array.txt", "r");
		if(input_file == NULL) {
			perror("fopen()");
			return 0;
		}
		for (int f=0; f<3; f++){
			//for (int g=0; g<3; g++){
				fscanf(input_file, "%d %d %d", &myArray4[f][0], &myArray4[f][1], &myArray4[f][2]);
				printf("FromFile, %d %d %d\n", myArray4[f][0], myArray4[f][1], myArray4[f][2]);

		}
		fclose(input_file);

		for (int cnt1=0; cnt1 < 3; cnt1++) {
					printf("\n");
					for (int cnt2=0; cnt2 < 3; cnt2++) {
						printf("(%d:%d)",cnt1,cnt2);
						printf("%d,", myArray4[cnt1][cnt2]);
					}
				}
				printf("\n\n");
				returnValue = labArray1(myArray4);
				printf(" Number return: %d \n\n", (int)returnValue);
				break;
	}
	//}

	return 0;
	}

