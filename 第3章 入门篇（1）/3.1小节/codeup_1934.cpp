#include <stdio.h>

int main()
{
    int n = 0;
    while(scanf("%d", &n) != EOF){
        int num[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &num[i]);

        int x, index = -1;
        scanf("%d", &x);
        for(int i = 0; i < n; i++){
            if(x == num[i]){
                index = i;
                break;
            }
        }
        printf("%d\n", index);
    }

    return 0;
}
