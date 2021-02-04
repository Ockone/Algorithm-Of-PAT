#include <cstdio>

int main()
{
    int i = 0, sum = 0;
    while(true){
        sum += ++i;
        if(sum > 1000)
            break;
    }
    printf("%d\n", i);
    return 0;
}
