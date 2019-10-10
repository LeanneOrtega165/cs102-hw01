#include <stdio.h>
#include <stdlib.h>
int main(int input_en, char **input) {
	printf("num of inputs: %d\n", input_en);
	printf("operator: %s\n", input[1]);

double a = atof(input[2]);
double b = atof(input[3]);
double c;

if (input[1][0] == '+'){
	c = a+b;
	printf("The addition of 'a+b=%f'\n", c);
	} 

if (input[1][0] == '-'){
	c = a-b;
	printf("The addition of 'a-b=%f'\n", c);
	} 

if (input[1][0] == '*'){
	c = a*b;
	printf("The addition of 'a*b=%f'\n", c);
	} 

if (input[1][0] == '/'){
	c = a/b;
	printf("The addition of 'a/b=%f'\n", c);
	} 

}

