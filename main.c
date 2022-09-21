#include<stdio.h>
int main(void) {
	
	int input_int;
	float input_float;
	
	printf("write an integer: ");
	scanf("%d", &input_int);

	printf("write a float: ");
	scanf("%f", &input_float);

	printf("integer: %d, float: %f \n", input_int, input_float);
	
	return 0;
}


