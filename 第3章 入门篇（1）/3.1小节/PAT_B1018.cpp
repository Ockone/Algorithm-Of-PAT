#include <stdio.h>

int maping(char ges) // 将C、J、B映射为0、1、2
{
    /* 正好字典序 */
    if(ges == 'B') return 0; // 锤子
    if(ges == 'C') return 1; // 剪刀
    if(ges == 'J') return 2; // 布
    return -1; // ERROR
}

char compare(int a, int b)
{
    if(a == b)
        return 'P'; // 平局
    else{
        if((a + 1) % 3 == b)
            return 'A'; // A胜
        else
            return 'B'; // B胜
    }
    return 'E'; // ERROR
}

int index(int num[], int N) // 返回长度为N的数组最大元素的下标
{
    int i = 0, temp = 0;
    while(i < N){
        if(num[i] > num[temp])
            temp = i;
    }
    return temp;
}

void print(int Ares[], int Bres[], int Ages[], int Bges[])
{
    printf("%d %d %d\n", Ares[0], Ares[1], Ares[2]);
    printf("%d %d %d\n", Bres[0], Bres[1], Bres[2]);
    int a = index(Ages, 3);
    int b = index(Bges, 3);
    char ges[3] = {'B','C','J'};
    printf("%c %c\n", ges[a], ges[b]);
}
int main()
{
    int N = 0;
    scanf("%d", &N);

    int Ares[3] = {0}; int Bres[3] = {0}; // 记录A、B两人分别的胜负次数
    int A[3] = {0}; int B[3] = {0}; // 记录不同手势获胜次数

    char Ages, Bges; // A、B两人的手势
    while(N--){
        scanf("%c %c", &Ages, &Bges);
        int a = maping(Ages), b = maping(Bges);
        if(compare(a, b) == 'A'){
            Ares[0]++;
            Bres[2]++;
            A[a]++;
        }
        if(compare(a, b) == 'B'){
            Ares[2]++;
            Bres[0]++;
            B[b]++;
        }
        if(compare(a, b) == 'P'){
            Ares[1]++;
            Bres[1]++;
            B[b]++;
        }
    }
    print(Ares, Bres, A, B);
    return 0;
}
