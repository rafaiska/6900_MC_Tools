#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

double factorial(int x); //Calcula iterativamente o fatorial de um numero x
double taylor_sqrt(double x, int kmax); //Calcula raiz quadrada de (x+1) atraves de um polinomio de taylor com kmax iteracoes.
double taylor_sin(double x, int kmax);
double taylor_cos(double x, int kmax);

