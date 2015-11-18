#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"


int main(void){

	long double m1[2][2];
	long double m2[1][2];
	m1[0][0] = 1;
	m1[0][1]=1;
	m1[1][0] =0;
	m1[1][1]=1;

	m2[0][0] = 1;
	m2[0][1]=1;
	
	MATRIX mObj1;
	MATRIX mObj2;
	
	mObj1.cols = 2;
	mObj2.cols =1;

	mObj1.rows = 2;
	mObj2.rows = 2;

	mObj1.mat = *m1;
	mObj2.mat = *m2;	

	MATRIX result = matprod(mObj1, mObj2);	
	printf(" {%d, %d}\n", result.cols, result.rows);
	if(result.rows!=2){
		printf("\nNumber of rows incorrect %d should be 2 \n", result.rows);
	}
	if(result.cols!=2){
		printf("\nNumber of columns incorrect %d should be 2 \n", result.cols);
	}
	
	int i, j;
	long double v;
	for (i=0; i<result.rows; i++)
    	{
		for (j=0; j<result.cols; j++)
		{
		    v = *(result.mat+i+j);
		    printf("result[%d][%d] : %d\t", i, j, v);
		}
        	puts("");
    	}
	return 0;
}
