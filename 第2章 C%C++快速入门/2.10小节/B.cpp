#include <stdio.h>

int main()
{
    int N;
    scanf("%d\n", &N);
    int a, b;
    while(N > 0){
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
        N--;
    }
    return 0;
}
