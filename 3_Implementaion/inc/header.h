
#ifndef __header_H__
#define __header_H__
#include <stdio.h>
#include <math.h>
#include<stdlib.h>


typedef struct calculate{
    int value1;
    int value2;
}calculate;


typedef struct trigonometric{
	int value3;
}trigonometric;


int sum(calculate *compute);


int substraction(calculate *compute);

int multiplication(calculate *compute);

int division(calculate *compute);

int power(calculate *compute);

int squareroot(trigonometric *degree);

int sine(trigonometric *degree);
osine( trigonometric *degree);

int ttan( trigonometric *degree);

int cosec( trigonometric *degree);

int sec( trigonometric *degree);

int cot( trigonometric *degree);

int exponent(trigonometric *degree);

int factorial(trigonometric *degree);

int logbase10(trigonometric *degree);
#endif  /* #define __calculateCULATOR_OPERATIONS_H__ */