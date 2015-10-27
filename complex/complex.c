#include <stdio.h>

struct ComplexNumber{
	int x;
	int y;
};

struct ComplexNumber mult2(struct ComplexNumber a,struct ComplexNumber b);
struct ComplexNumber square(struct ComplexNumber a);
struct ComplexNumber add2(struct ComplexNumber a, struct ComplexNumber b);
struct ComplexNumber juliamap(struct ComplexNumber z, struct ComplexNumber c);
char ** complex_to_str(struct ComplexNumber z); 
void test(void);

int main(void){
	test();
	return 0;
}


void test(void){
	struct ComplexNumber a;
	struct ComplexNumber b;
	a.x=1;
	a.y=2;
	b.x=3;
	b.y=4;
		
	struct ComplexNumber result;
	result = mult2(a,b);

	char* f = complex_to_str(result); 
	
	printf("result: %s\n", f);

}

char ** complex_to_str(struct ComplexNumber z){
	char  tagstr[160];
	sprintf(tagstr, "%d+%di", z.x, z.y);
	printf("String %s \n", tagstr);
	return & tagstr;
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