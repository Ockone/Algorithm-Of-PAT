#include <stdio.h>

// �ַ��ı任 ASCII��
// A-Z 65-90 a-z 97-122

int main()
{
    char str[20];
    gets(str);

    int i = 0;
    while(str[i] != '\0'){
            /* �˴����ַ���ASCII�������������*/
        if('A' <= str[i] && str[i] <= 'Z')
            str[i] = 'Z' - (str[i] - 'A');
        if('a' <= str[i] && str[i] <= 'z')
            str[i] = 'z' - (str[i] - 'a');
        i++;
    }
    puts(str);
    return 0;
}
