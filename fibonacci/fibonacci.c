#include <stdio.h>
int main(void){
	int initF1=1;
	int initF2=1;
	printf("%d,%d",initF1, initF2);
	int i;
	for (i=0; i<100; i++){
		int r=initF1+initF2;
		if(r<0){
			printf("\nbreak on %d, int out of range\n", i);
			break;
		}
		printf(",%d",r);
		initF1=initF2;
		initF2=r;
		
	}
	printf("\nDone! \n");
	return 0;
}
