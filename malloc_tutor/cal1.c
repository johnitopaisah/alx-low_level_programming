#include <stdio.h>
#include  <stdlib.h>
int main()
{
	int i, n;

	printf("Enter size of arrar\n");
	scanf("%d", &n);
	int *A   = (int* )calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	putchar('\n');
	return (0);
}
