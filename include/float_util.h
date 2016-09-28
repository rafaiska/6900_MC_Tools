#ifndef FLOAT_UTIL_H
#define FLOAT_UTIL_H

#include <math.h>

typedef struct float_ieee_t
{
	char sign;
	char exp[12];
	char signif[53];
}float_ieee_t;

float_ieee_t Float_to_IEEE_Struct(double x);

#endif
