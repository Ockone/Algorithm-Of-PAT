#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    while(n != 0){
        int total = 0, temp = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &temp);
            total += temp;
        }
        printf("%d\n", total);
        scanf("%d", &n);
    }
    return 0;
}
