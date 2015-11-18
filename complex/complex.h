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
