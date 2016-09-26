#include "taylor.h"

double factorial(int x)
{
	double res = 1.0;

	for(x; x>1; --x)
	{
		res *= x;
	}

	return res;
}

double taylor_sqrt(double x, int kmax)
{
	int k, l;
	double res = 0.0;
	double termo;
	long raizp = 1;

	if(x >= 1.0 || x<= -1.0)
	{
		for(k=1; raizp < x; ++k)
			raizp = k*k;

		x /= raizp;
		raizp /= k;
	}

	x -= 1.0;

	for(k=kmax; k>=1; --k)
	{
		termo = 1;
		for(l= 2*k -2; l > k; --l)
			termo *= k;
		termo /= factorial(k-1);
		termo /= pow(2, 2*k -1);

		res += termo;

		if(k%2 == 0)
			res *= x;
		else
			res *= -x;
	}

	res += 1.0 + (x>=1 || x<= -1)? raizp : 0.0;
	return res;
}

double taylor_sin(double x, int kmax)
{
	int k, l;
	double res = 0.0;
	double termo;

	for(k=kmax; k>=1; --k)
	{
		termo = 1;
		termo /= factorial(2*k +1);

		res += termo;

		if(k%2 == 0)
			res *= (x * x);
		else
			res *= -(x * x);
	}
	res += 1.0;
	res *= x;

	return res;
}

double taylor_cos(double x, int kmax)
{
	int k, l;
	double res = 0.0;
	double termo;

	for(k=kmax; k>=1; --k)
	{
		termo = 1;
		termo /= factorial(2*k);

		res += termo;

		if(k%2 == 0)
			res *= (x * x);
		else
			res *= -(x * x);
	}
	res += 1.0;

	return res;
}

