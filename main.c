#include "taylor.h"

int main()
{
	double alpha;
	int k;

	printf("Valor de alfa >");
	scanf("%lf", &alpha);

	for(k=7; k<12; ++k)
		printf("Raiz de alfa por Taylor (k=%d) = %.20lf\n", k, taylor_sqrt(alpha -1.0, k));

	printf("Valor obtido pelo sqrt() = %.20lf\n", sqrt(alpha));
	printf("Diferenca do valor calculado para sqrt = %.20lf\n", sqrt(alpha) - taylor_sqrt(alpha -1.0, k));

	return 0;
}
