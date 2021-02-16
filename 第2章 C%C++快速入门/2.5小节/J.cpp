#include <stdio.h>
#include <string.h>
// ¿¼²ìstrcmp·½·¨
int main()
{
    char str[3][20];
    for(int i = 0; i < 3; i++)
        gets(str[i]);

    int n = 0;
    for(int i = 0; i < 3; i++){
        if(strcmp(str[i], str[n]) > 0)
            n = i;
    }
    puts(str[n]);
    return 0;
}
