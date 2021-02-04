#include <stdio.h>

// 字符的变换 ASCII码
// A-Z 65-90 a-z 97-122

int main()
{
    char str[20];
    gets(str);

    int i = 0;
    while(str[i] != '\0'){
            /* 此处对字符、ASCII码的理解很有意义*/
        if('A' <= str[i] && str[i] <= 'Z')
            str[i] = 'Z' - (str[i] - 'A');
        if('a' <= str[i] && str[i] <= 'z')
            str[i] = 'z' - (str[i] - 'a');
        i++;
    }
    puts(str);
    return 0;
}
