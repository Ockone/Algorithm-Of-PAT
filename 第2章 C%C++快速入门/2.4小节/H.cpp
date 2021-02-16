#include <stdio.h>

int main()
{
    int a = 1, b = 1, n;
    scanf("%d", &n);
    int sum = 0;
    if(n == 1 || n == 2)
        sum = 1;
    else{
        while(n >= 3){
            sum = a + b;
            a = b;
            b = sum;
            n--;
        }
    }
    printf("%d\n", sum);
    return 0;
}
