#include "taylor.h"
#include "float_util.h"

int main()
{
	double x;
	float_ieee_t x_s;

	printf("Entre com um numero decimal:\n>");
	scanf("%lf", &x);

	x_s = Float_to_IEEE_Struct(x);
	printf("A representacao desse numero no padrao IEEE 754 eh:\n");
	printf("%c %s %s\n", x_s.sign, x_s.exp, x_s.signif);
	
	return 0;
}
