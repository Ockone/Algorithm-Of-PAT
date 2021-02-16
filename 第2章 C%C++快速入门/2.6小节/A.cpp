#include <stdio.h>

void swag(char str[])
{
	int n = 0;
	while(str[n] != '\0') // È·¶¨×Ö·û´®³¤¶È
		n++;
    for(int i = 0; i < n / 2; i++){ // ·´Ðò´æ·Å
		char temp = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = temp;
	}
}

int main()
{
	char str[20];
	gets(str); // ÖÕ¶Ë¶ÁÈë×Ö·û´®
	swag(str);
	puts(str); // ÖÕ¶ËÊä³ö×Ö·û´®
	return 0;
}
