#include <stdio.h>
#include <math.h>

int main()
{
    double _Pi_ = 0.0, n = 1.0, sign = -1.0;
    double sum = 1.0 / n; // 因子
    while(sum >= 1e-6){ // PI精度10^-6
        sign *= -1.0; // 变号
        _Pi_ += sum * sign;
        n += 2.0;
        sum = 1.0 / n;
    }
    printf("PI=%10.8f\n", _Pi_ * 4); // 宽度10，精度6位小数
    return 0;
}
