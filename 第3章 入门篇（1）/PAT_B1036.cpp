#include <stdio.h>

int main()
{
    int N; // 正方形边长
    char C; // 组成边的字符
    scanf("%d %c", &N, &C);

    int a, b; // 行、列分别包含发字符数
    a = N;
    if(N % 2 == 0) // 四舍五入
        b = N / 2;
    else
        b = N / 2 + 1;

    int i = 1;
    while(i <= b){
        if(i != 1 && i != b){
            printf("%c", C);
            for(int j = 0; j < a - 2; j++) printf(" ");
            printf("%c\n", C);
        }else{
            for(int j = 0; j < a; j++) printf("%c", C);
            printf("\n");
        }
        i++;
    }
    return 0;
}
