#include "taylor.h"

int main()
{
	double alpha;

	printf("#X, TAYLOR_SIN, SIN, ERRO_SIN, TAYLOR_COS, COS, ERRO_COS\n");
	alpha = -1.5;
	while(alpha <= 1.51)
	{
		printf("%.1lf %.10lf %.10lf %.4lf %.10lf %.10lf %.4lf\n", alpha, taylor_sin(alpha, 9), sin(alpha), (taylor_sin(alpha,9) - sin(alpha))/sin(alpha), taylor_cos(alpha, 9), cos(alpha), (taylor_cos(alpha,9) - cos(alpha))/cos(alpha));
		alpha += 0.1;
	}

	return 0;
}
