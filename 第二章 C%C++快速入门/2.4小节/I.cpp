#include <stdio.h>

int main()
{
    double a = 1.0, b = 2.0, c = 3.0, sum = 0.0;
    int n = 1;
    while(n++ <= 20){
        sum += b / a;
        c = a + b;
        a = b;
        b = c;
    }
    printf("%.6f\n", sum);
    return 0;
}
