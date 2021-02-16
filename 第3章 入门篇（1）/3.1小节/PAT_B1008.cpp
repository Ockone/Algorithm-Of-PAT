#include <stdio.h>

void input(int listS[], int N)
{
    /* 输入数组 */
    int i = 0;
    while(i < N){
        scanf("%d", &listS[i]);
        i++;
    }
}

void print(int listS[], int N)
{
     /* 打印数组 */
    int i = 0;
    while(i < N){
        printf("%d", listS[i]);

        if(i != N-1)
            printf(" ");
        else
            printf("\n");
        i++;
    }
}

void circleMove(int listS[], int N)
{
    /* 该临界区内每执行一次
    *  数组进行一次循环右移
    */
    int i = 0, j, temp; // i游标当前位置;j下一个位置.
    int exchange = listS[0]; // 定义exchange初始化。
    while(i < N){
        j = (i + 1) % N; // j是i的下一个位置
        /* exchange记录被替换的j元素
        * exchange与listS[j]交换
        */
        temp = listS[j];
        listS[j] = exchange;
        exchange = temp;
        i++;
    }
}

int main()
{
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);
    M = M % N; // 因为输入的M不一定满足M<N,取余
    int listS[N];

    input(listS, N);

    /* 执行M次循环右移 */
    while(M--)
        circleMove(listS, N);

    print(listS, N);
    return 0;
}
