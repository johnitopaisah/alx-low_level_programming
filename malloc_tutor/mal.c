#include <stdio.h>
#include  <stdlib.h>
int main()
{
	int i, n;

	printf("Enter size of arrar\n");
	scanf("%d", &n);
	int *A   = (int* )malloc(n*sizeof(int));

	for (i = 0; i < n; i++)
	{
		A[i] = i + 1;
		printf("%d ", A[i]);
	}
	return (0);
}
