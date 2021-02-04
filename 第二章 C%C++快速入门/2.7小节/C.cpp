#include <stdio.h>

int main()
{
    char *a = "I love China!";
    int n;
    scanf("%d", &n);
    a += n;
    puts(a);
    return 0;
}
