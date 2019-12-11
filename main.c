/*
 * main.c
 *
 *  Created on: 24.10.2019
 *      Author: Froemberg Raphael
 */

#include <stdio.h>

int main(void){

	printf("Size of char %d\n", sizeof(char));
	printf("Size of uchar %d\n", sizeof(unsigned char));
	printf("Size of schar %d\n", sizeof(signed char));
	printf("\n");
	printf("Size of short %d\n", sizeof(short));
	printf("Size of ushort %d\n", sizeof(unsigned short));
	printf("Size of sshort %d\n", sizeof(signed short));
	printf("\n");
	printf("Size of int %d\n", sizeof(int));
	printf("Size of uint %d\n", sizeof(unsigned int));
	printf("Size of sint %d\n", sizeof(signed int));
	printf("\n");
	printf("Size of long %d\n", sizeof(long));
	printf("Size of ulong %d\n", sizeof(unsigned long));
	printf("Size of slong %d\n", sizeof(signed long));
	printf("\n");
	printf("Size of float %d\n", sizeof(float));
	printf("Size of double %d\n", sizeof(double));
	printf("Size of long double %d\n", sizeof(long double));
	return 0;
}
