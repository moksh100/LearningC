#include <stdio.h>
#include "complex.h"
void test(void);

int main(void){
	test();
	return 0;
}


void test(void){
	ComplexNumber a;
	ComplexNumber b;
	a.x=1;
	a.y=2;
	b.x=3;
	b.y=4;
		
	ComplexNumber result;
	result = mult2(a,b);

	char* f = complex_to_str(result); 
	printf("result mult2 %s\n",f);
	result = square(a);	
	printf("result square: %s\n", complex_to_str(result));

	result = add2(a,b);
	printf("result add2: %s\n", complex_to_str(result));
	result = juliamap(a,b);
	printf("result juliamap: %s\n", complex_to_str(result));

}
