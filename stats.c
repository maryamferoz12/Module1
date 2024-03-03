#include<stdio.h>
#include<stdlib.h>
#include "stats.h"
#define ARRAY_SIZE 5
int main()
{
	unsigned char arr[ARRAY_SIZE] = {55,13,4,8,67};
	PRINT_ARRAY(arr,ARRAY_SIZE);
	printf("\n");
	STATISTICS(arr,ARRAY_SIZE);
	return 0 ;
}
