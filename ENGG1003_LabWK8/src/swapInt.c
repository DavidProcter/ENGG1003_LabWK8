/*
 ============================================================================
 Name        : swapInt.c
 Author      : David Procter
 Version     : 002
 Copyright   : Copyright - David Procter
 Description : Computer Lab Week 8 Tasks, swap integer function
 ============================================================================
 */


void swapInt(int *x, int *y) {
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return ;

}
