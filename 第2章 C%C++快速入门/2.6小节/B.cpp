#include <stdio.h>

void vowel(char s1[], char s2[])
{
    int i = 0, j = 0;
    while(s1[i] != '\0'){
        if(s1[i] == 'a' || s1[i] == 'A'
            || s1[i] == 'E' || s1[i] == 'e'
            || s1[i] == 'i' || s1[i] == 'I'
            || s1[i] == 'o' || s1[i] == 'O'
            || s1[i] == 'u' ||s1[i] == 'U')
            {
                s2[j++] = s1[i]; // ��ֵ��j++
            }
        i++;
    }
    s2[j] = '\0'; // ���ַ���s2���ϴ�β��־����Ȼ��������
}

int main()
{
    char input[20], output[20];
    gets(input);
    vowel(input, output);
    puts(output);
    return 0;

}
