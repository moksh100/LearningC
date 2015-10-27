#include <stdio.h>
int main(void){
	long initF1=1;
	long initF2=1;
	printf("%d,%d",initF1, initF2);
	int i;
	long r;
	for (i=0; i<100; i++){
		r=initF1+initF2;
		if(r<0){
			printf("\nbreak on %d, int out of range\n", i);
			break;
		}
		printf(",%lu",r);
		initF1=initF2;
		initF2=r;
		
	}
	printf("\nDone! \n");
	return 0;
}
