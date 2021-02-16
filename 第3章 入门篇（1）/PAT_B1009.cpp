#include <stdio.h>

// 将句中所有单词颠倒顺序输出

int main()
{
    char str[80][81]; // 总长度不超过80
    int i = 0;
    while (scanf("%s", str[i]) != EOF)
        i++;

    for (int j = i - 1; j >= 0; j--) {
        printf("%s", str[j]);

        if (j != 0) printf(" ");
        else printf("\n");
    }
    return 0;
}
