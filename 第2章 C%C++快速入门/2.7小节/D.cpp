#include <stdio.h>
#include <string.h>

int main()
{
    char a[20], b[20], c[20];
    char *pa = a, *pb = b, *pc = c;
    /* 我最初直接gets输入未初始化的指针型变量，出错；
    谨记这一类错误！ */
    gets(pa);
    gets(pb);
    gets(pc);
    char *temp;
    if(strcmp(pa, pb) > 0){
        temp = pa;
        pa = pb;
        pb = temp;
    }
    if(strcmp(pb, pc) > 0){
        temp = pb;
        pb = pc;
        pc = temp;
    }
    if(strcmp(pa, pb) > 0){
        temp = pa;
        pa = pb;
        pb = temp;
    }
    puts(pa);
    puts(pb);
    puts(pc);
    return 0;
}
