#include <stdio.h>

int main()
{
    int n = 0;
    while(scanf("%d", &n) != EOF){
        int total = 0, temp = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &temp);
            total += temp;
        }
        printf("%d\n", total);
    }
    return 0;
}
