#include "float_util.h"

float_ieee_t Float_to_IEEE_Struct(double x)
{
	float_ieee_t return_s;
	int exp, i;

	if(x >= 0)
		return_s.sign = '0';
	else
		return_s.sign = '1';

	x = frexp(x,&exp);
	exp += 1024;

	for(i=10; i>=0; --i)
	{
		if(exp & 1)
			return_s.exp[i] = '1';
		else
			return_s.exp[i] = '0';

		exp /= 2;
	}
	return_s.exp[11] = '\0';

	x *= 2;				//first bit is aways 1
	x -= 1.000000000000000;		//not represented
	for(i=0; i<52; ++i)
	{
		x *= 2;

		if(x >= 1.0000000000000000)
		{
			return_s.signif[i] = '1';
			x -= 1.000000000000000;
		}
		else
		{
			return_s.signif[i] = '0';
		}
	}
	return_s.signif[i] = '\0';

	return return_s;
}
