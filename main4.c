#includ#include<stdio.h>
int main(void) {

	float a;
	float b;
 
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%f", &a);
	
	printf("�и� �Է��ϼ���: ");
	scanf("%f", &b);

	printf("�������� ����� %f", (a / b));
	return 0;
}