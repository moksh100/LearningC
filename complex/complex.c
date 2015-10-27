#include <stdio.h>

struct ComplexNumber{
	int x;
	int y;
};

struct ComplexNumber mult2(struct ComplexNumber a,struct ComplexNumber b);
struct ComplexNumber square(struct ComplexNumber a);
struct ComplexNumber add2(struct ComplexNumber a, struct ComplexNumber b);
struct ComplexNumber juliamap(struct ComplexNumber z, struct ComplexNumber c);
char* complex_to_str(struct ComplexNumber z); 

int main(void){
	return 0;
}

char* complex_to_str(struct ComplexNumber z){
	char tagstr[160];
	sprintf(tagstr, "%d+%di", z.x, z.y);
	return tagstr;
}

struct ComplexNumber juliamap(struct ComplexNumber z, struct ComplexNumber c){
	struct ComplexNumber result;
	result = add2(square(z),c);
	return result;
}

struct ComplexNumber add2(struct ComplexNumber a, struct ComplexNumber b){
	struct ComplexNumber result;
	result.x=a.x+b.x;
	result.y=a.y+b.y;
	return result;
}



struct ComplexNumber mult2(struct ComplexNumber a, struct ComplexNumber b){
	struct ComplexNumber result;
	result.x=((a.x*b.x)-(a.y*b.y));
	result.y=((a.x*b.y)+(b.x*a.y));
	return result;
};

struct ComplexNumber square (struct ComplexNumber a){
	struct ComplexNumber result;
	result.x=(a.x*a.x)-(a.y*a.y);
	result.y=a.y*a.y;
	return result; 
};
