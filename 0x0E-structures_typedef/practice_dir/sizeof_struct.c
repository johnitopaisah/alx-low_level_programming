#include <stdio.h>
#include <stddef.h>

int main(void)
{
	struct point {
		int w;
		int x;
		char y;
		int z;
	};

	printf("Offset of member w: %ld\n", offsetof(struct point, w));
	printf("Offset of member x: %ld\n", offsetof(struct point, x));
	printf("Offset of member y: %ld\n", offsetof(struct point, y));
	printf("Offset of member z: %ld\n", offsetof(struct point, z));

	return (0);
}
