#include <stdio.h>
// 字符串比大小

int main()
{
    char str1[20], str2[20];
    gets(str1);
    gets(str2);
    int i = 0;
    while(str1[i] == str2[i] && str1[i] != '\0')
        i++;
    int n = str1[i] - str2[i]; // 理解ASCII码这段代码的缘由
    printf("%d\n", n);
    return 0;
}
