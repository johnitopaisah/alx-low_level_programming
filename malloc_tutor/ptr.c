#include <stdio.h>

int main(void)
{
	int a = 10;
	int *ptr = &a;
	int **dptr = &ptr;

	printf("Address of a = %p\n", &a);
	printf("ptr is pointing to the address %p\n", ptr);
	printf("%d\n", **dptr);
	
	int arr[5] = {10, 20, 30, 40, 50};

	printf("%lu\n", arr);
	printf("%lu\n", arr+1);
	printf("%lu\n", &arr+1);

	return (0);
}
