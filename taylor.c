#include "taylor.h"

long factorial(long x)
{
	long res = 1;

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

	for(k=kmax; k>=1; --k)
	{
		if(k%2 == 0)
			termo = -1.0;
		else
			termo =  1.0;

		termo *= pow(x, k);
		termo *= factorial(2*k - 2);
		termo /= (double)(factorial(k)) * (double)(factorial(k-1)) * pow(2, 2*k -1);

		res += termo;
	}

	res += 1.0;
	return res;
}

double taylor_sin(double x, int kmax)
{

}

double taylor_cos(double x, int kmax)
{

}

