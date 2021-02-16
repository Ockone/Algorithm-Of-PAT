#include <stdio.h>
//1~100¿€º”

int main()
{
    int i = 1, sum = 0;

    while(i <= 100){
        sum += i++;
    }
    printf("%d\n", sum);
    return 0;
}
