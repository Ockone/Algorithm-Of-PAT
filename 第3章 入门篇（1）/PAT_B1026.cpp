#include <stdio.h>

#define CLK_TCK 100 // 单位时间打点数

int main()
{
    int C1 = 0, C2 = 0;
    scanf("%d %d", &C1, &C2);
    int ticks = C2 - C1, time = 0;
    if(ticks % CLK_TCK >= 50)
        time = ticks / CLK_TCK +1;
    else
        time = ticks / CLK_TCK;

    printf("%02d:%02d:%02d\n", time / 3600, time % 3600 / 60, time % 60);
    return 0;
}
