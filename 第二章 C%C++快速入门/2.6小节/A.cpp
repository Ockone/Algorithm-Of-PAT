#include <stdio.h>

void swag(char str[])
{
	int n = 0;
	while(str[n] != '\0') // ȷ���ַ�������
		n++;
    for(int i = 0; i < n / 2; i++){ // ������
		char temp = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = temp;
	}
}

int main()
{
	char str[20];
	gets(str); // �ն˶����ַ���
	swag(str);
	puts(str); // �ն�����ַ���
	return 0;
}
