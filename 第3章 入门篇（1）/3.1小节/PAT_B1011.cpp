#include <stdio.h>

int main()
{
    int T = 0;
    scanf("%d", &T);

    int i = 1;
    while(i <= T){
        long long A, B, C;
        scanf("%lld %lld %lld", &A, &B, &C); // 长整型一定要用%lld，否则会出错
        if(A + B > C)
            printf("Case #%d: true\n", i); // 输入输出一定要对好格式
        else
            printf("Case #%d: false\n", i);
        i++;
    }
}
