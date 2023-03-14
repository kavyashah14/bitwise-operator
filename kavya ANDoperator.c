#include <stdio.h>
#include <stdlib.h>
int main()
 {
	int num1,num2,result;
	printf("Enter 2 numbers: ");
	scanf("%d %d ", &num1, &num2);
	
	result = num1 & num2;
	printf("Result of AND operation :%d\n", result);
	return 0;
}

	


