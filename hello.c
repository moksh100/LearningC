#include <stdio.h>

int main(int argc, char **argv) {
    
    //C++ -comment: global contant character array containing a string
 	static const char *string = "a string";
	char *program = argv[0];
    	printf("This is %s, running in the program %s!\n", string, program);
    
    	return 0;
}
