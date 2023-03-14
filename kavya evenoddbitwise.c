#include <stdio.h>
#include <stdlib.h>
int main()
 {
	int num1;
	printf("Enter a number: ");
	scanf("%d",&num1);
	
    if(num1 & 1)
    {
    	printf("%d num is odd \n ",num1);
    	
	}
	else
	{
		printf("%d is even. \n",num1);
	}
	
	
	return 0;
}

	


