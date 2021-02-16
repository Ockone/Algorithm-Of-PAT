#include <stdio.h>

int main()
{
    int A, B, D;
    scanf("%d %d %d", &A, &B, &D);

    int result = A + B;
    int num[32], index = 0; // 因为 A,B <= 2^30-1 ;

    do{ // 必须用do-while，否则result=0时，会被跳过，导致num内无数据
        num[index] = result % D;
        result /= D;
        index++;
    }while(result != 0);

    for(int i = index - 1; i >= 0; i--)
        printf("%d", num[i]);
    printf("\n");

    return 0;
}
