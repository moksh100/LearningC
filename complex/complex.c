#include <stdio.h>

struct ComplexNumber{
	int x;
	int y;
};

ComplexNumber mult2(ComlexNumber a, ComplexNumber b){
	struct ComplexNumber result;
	result.x= ((a.x*b.x)-(a.y*b.y));
	result.y= ((a.x*b.y)+(b.x*a.y));
	return result;
}

int square (ComplexNumber a){
	struct ComplexNumber result;
	result.x=(a.x*a.x)-(a.y*a.y);
	result.y=a.y*a.y; 
}

int main(void) {
	
}
