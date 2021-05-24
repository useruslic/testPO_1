#include "yrav.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int yrav(double a, double b, double c, double *x1, double *x2)
{
	if (a == 0) return -1;

	if (a != 0 && b == 0 && c == 0) {
		//один корень
		*x1 = 0;
		return 1;
	}

    double d = 0;
    d = b * b - 4 * a * c;
    if (d < 0) {
		//нет корней
		return 0;
	}
    if(d == 0) {
		//один корень
		*x1 = (-b)/(2 * a);
		return 1;
	}
    else {
		//два корня
		*x1 = (-b + sqrt(d))/(2 * a);
		*x2 = (-b - sqrt(d))/(2 * a);
		return 2;
	}
}
