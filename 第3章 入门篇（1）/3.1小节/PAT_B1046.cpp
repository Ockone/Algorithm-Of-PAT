#include <stdio.h>

int main()
{
    int N = 0;
    scanf("%d", &N);

    int Awin = 0, Bwin = 0;
    int A1, A2, B1, B2; // 甲喊，甲划，乙喊，乙划
    while(N--){
        scanf("%d %d %d %d", &A1, &A2, &B1, &B2);
        bool a = (A2 == A1 + B1), b = (B2 == A1 + B1);
        if(a && !b)
            Awin++;
        if(b && !a)
            Bwin++;
    }
    printf("%d %d\n", Bwin, Awin); // 注意题目要求输出喝酒次数，而不是赢的次数
    return 0;

}
