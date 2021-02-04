#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);
    double f = sqrt(pow(b, 2.0) - 4.0*a*c);
    r1 = ((-1.0)*b + f) / (2.0*a);
    r2 = ((-1.0)*b - f) / (2.0*a);
    printf("r1=%7.2f\nr2=%7.2f", r1, r2);
    return 0;
}