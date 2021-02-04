#include <stdio.h>
#include <math.h>

int main()
{
    double _Pi_ = 0.0, n = 1.0, sign = -1.0;
    double sum = 1.0 / n; // ����
    while(sum >= 1e-6){ // PI����10^-6
        sign *= -1.0; // ���
        _Pi_ += sum * sign;
        n += 2.0;
        sum = 1.0 / n;
    }
    printf("PI=%10.8f\n", _Pi_ * 4); // ���10������6λС��
    return 0;
}
