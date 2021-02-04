#include <stdio.h>

int main()
{
    int M = 0, N = 0;
    scanf("%d", &N);
    while(N--){
        scanf("%d", &M);
        int total = 0, temp = 0;
        for(int i = 0; i < M; i++){
            scanf("%d", &temp);
            total += temp;
        }
        printf("%d\n", total);
    }
    return 0;
}
