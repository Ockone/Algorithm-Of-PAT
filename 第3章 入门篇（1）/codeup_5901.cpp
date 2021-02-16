#include <stdio.h>

int main()
{
    char str[256]; // 字符串最长255，再加上'\0'
    scanf("%s", str);

    int i = 0, j = 0; // i、j作为游标
    while(str[i] != '\0') // 先找到上标
        i++;

    bool flag = true; // 标志，是否回文串
    i--;
    while(j < i){
        if(str[i] != str[j]){
            flag = false;
            break;
        }
        i--;j++;
    }

    if(flag)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
