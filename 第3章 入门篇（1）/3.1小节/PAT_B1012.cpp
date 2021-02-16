#include <stdio.h>


void process(bool visit[], int N, int &A1, int &A2, int &A3, double &A4, int &A5)
{
    int temp = 0, sgn = 1, n = 0;
    for(int i = 0; i < N; i++){
        scanf("%d", &temp); // 读入数据
        switch (temp % 5)
        {
        case 0:
            if(temp % 2 ==0){
                visit[0] = true;
                A1 += temp;
            }
            break;
        case 1:
            visit[1] = true;
            A2 += sgn * temp;
            sgn *= -1;
            break;
        case 2:
            visit[2] = true;
            A3++;
            break;
        case 3:
            visit[3] = true;
            A4 += temp;
            n++;
            break;
        case 4:
            visit[4] = true;
            if(temp > A5)
                A5 = temp;
            break;
        }
    }
    A4 /= n; // 求平均数
}

void print(bool visit[], int A1, int A2, int A3, double A4, int A5)
{
    if(visit[0]) printf("%d ", A1);
    else printf("N ");
    if(visit[1]) printf("%d ", A2);
    else printf("N ");
    if(visit[2]) printf("%d ", A3);
    else printf("N ");
    if(visit[3]) printf("%.1f ", A4);
    else printf("N ");
    if(visit[4]) printf("%d\n", A5);
    else printf("N\n");
}

int main()
{
    int N = 0;
    scanf("%d", &N); // 读入数字个数

    int A1 = 0, A2 = 0, A3 = 0, A5 = 0;
    double A4 = 0.0;
    bool visit[5] = {false};

    process(visit, N, A1, A2, A3, A4, A5);
    print(visit, A1, A2, A3, A4, A5);

    return 0;
}
