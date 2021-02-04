#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);
    double d, f;
    d = pow(b, 2.0) - 4.0*a*c;
    if(d >= 0){
        f = sqrt(d);
        r1 = ((-1.0)*b + f) / (2.0*a);
        r2 = ((-1.0)*b - f) / (2.0*a);
        printf("r1=%7.2f\nr2=%7.2f", r1, r2);
    }else{
        printf("No real roots!");
    }
    return 0;
}