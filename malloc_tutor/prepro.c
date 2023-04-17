#include <stdio.h>
#define SQR(X) (X*X)
#define DEMO(X) (X+X)

int main(void)
{
	int n;
	
	n = DEMO(2) * SQR(3);
	printf("%d\n", n);
	return (0);
}
