#include <stdio.h>
#include <string.h>

int main()
{
    char a[20], b[20], c[20];
    char *pa = a, *pb = b, *pc = c;
    /* �����ֱ��gets����δ��ʼ����ָ���ͱ���������
    ������һ����� */
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
