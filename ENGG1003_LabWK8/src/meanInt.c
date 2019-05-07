/*
 ============================================================================
 Name        : meanInt.c
 Author      : David Procter
 Version     : 001
 Copyright   : Copyright - David Procter
 Description : Computer Lab Week 8 Tasks, mean integer function
 ============================================================================
 */


void meanInt(int *x, int *y, int *z) {
	*x=(*x+*y+*z)/3;
	*y=0;
	*z=0;
	return;
}
