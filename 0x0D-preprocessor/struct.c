#include <stdio.h>

struct student{
	int row;
	float marks;
	char name[20];
};

int main(void)
{
	struct student s1, s2;

	struct student s1 = {1, "John", 4.5};
	struct student s2 = {2};
	printf("%d\n", s1.row);
	printf("%f\n", s2.marks);
	return (0);
}
