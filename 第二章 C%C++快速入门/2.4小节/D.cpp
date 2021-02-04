#include <stdio.h>

int main()
{
    int N, sum = 0;
    scanf("%d", &N);
    int i = 0;
    while(true){
        sum += ++i;
        if(i == N)
            break;
    }
    printf("%d\n", sum);
    return 0;
}
