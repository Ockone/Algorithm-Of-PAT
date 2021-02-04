#include <stdio.h>

int main()
{
    int sum[10];
    for(int i = 0; i < 10; i++)
        scanf("%d", &sum[i]);

    for(int i = 0; i <= 4; i++){
        int temp = sum[i];
        sum[i] = sum[9-i];
        sum[9-i] = temp;
    }

    for(int i = 0; i < 10; i++)
        printf("%d\n", sum[i]);

    return 0;
}
