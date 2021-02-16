#include <stdio.h>

int main()
{
    int sum = 0;
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 5; j++)
            printf("%3d", (i * j));
        putchar('\n');
    }
    return 0;
}
