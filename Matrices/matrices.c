#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"


MATRIX matprod(MATRIX m1, MATRIX m2){
	MATRIX result;
	if(m1.cols != m2.rows){
		printf("\n Can't multiply matrixes \n");
	}else{
	   result.rows=0;
	   result.cols=0;
	   result.mat =(long double *) calloc(m1.rows * m2.cols, sizeof(long double));
	   long double r; 
	   int i, c, a;  	
	   for (i=0; i<m1.rows; i++)
    	   {
		for (c=0;c<m2.rows; c++){
			for(a=0; a<m1.cols; a++){
				long double a1= *(m1.mat+a+i);
				long double a2 =*(m2.mat+a+c); 
				r = r+(a1*a2);
			}
			result.cols=result.cols+1;
			*(result.mat+i+c)= r;
		}
		result.rows=result.rows+1;
	   }
	}	
	return result;

}

int main(void)
{

    return 0;
}
