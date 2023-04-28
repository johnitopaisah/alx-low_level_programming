#ifndef CALC_H
#define CALC_H


#include <stdlib.h>

/**
 * struct op - struct op defination
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;


/* All the funtion prototype */
int op_mod(int a, int b);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);

#endif /* CALC_H */
