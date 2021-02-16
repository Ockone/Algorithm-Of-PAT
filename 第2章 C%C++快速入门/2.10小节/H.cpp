#include <stdio.h>

int main()
{
    int N = 0, M = 0;
    scanf("%d", &N);
    while(N--){
        int total = 0, temp = 0;
        scanf("%d", &M);
        for(int i = 0; i < M; i++){
            scanf("%d", &temp);
            total += temp;
        }
        printf("%d\n\n", total);
    }
    return 0;
}
