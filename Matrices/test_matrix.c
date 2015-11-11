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
			if(i==0){
				result.cols=result.cols+1;
			}
			*(result.mat+i+c)= r;
		}
		result.rows=result.rows+1;
	   }
	}	
	return result;

}

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
		printf("Number of rows incorrect");
	}
	if(result.cols!=2){
		printf("Number of columns incorrect");
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
