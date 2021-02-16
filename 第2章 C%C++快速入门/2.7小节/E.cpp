#include <stdio.h>

void input(int sum[])
{
    for(int i = 0; i < 10; i++)
        scanf("%d", &sum[i]);
}

void process(int sum[])
{
    int min = 0, max = 0; // 最小元素序号，最大元素序号
    int i = 0;
    while(i < 10){
        if(*(sum + i) < *(sum + min))
            min = i;
        if(*(sum + i) > *(sum + max))
            max = i;
        i++;
    }
    int temp = *sum;
    *sum = *(sum + min);
    *(sum + min) = temp;

    temp = *(sum + max);
    *(sum + max) = *(sum + i-1);
    *(sum + i-1) = temp;
}

void output(int sum[])
{
    int i = 0;
    while(i < 10)
        printf("%d ", *(sum + i++));
}

int main()
{
    int sum[10];
    input(sum);
    process(sum);
    output(sum);
    return 0;

}
