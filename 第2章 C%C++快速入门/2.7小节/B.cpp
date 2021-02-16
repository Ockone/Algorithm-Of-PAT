#include <stdio.h>

void sort(int *a, int *b, int *c)
{ // ����дѭ���ˣ��ֶ�ð������
    int temp;
    if(*a < *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*b < *c){
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if(*a < *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main()
{
    int a, b, c;
    int *p1 = &a, *p2 = &b, *p3 = &c;
    scanf("%d%d%d", p1, p2, p3);
    sort(p1, p2, p3);
    printf("%d %d %d\n", *p1, *p2, *p3);
    return 0;
}
/* ���÷�ʽ
void sort(int &a, int &b, int &c)
{ // ����дѭ���ˣ��ֶ�ð������
    int temp;
    if(a < b){
        temp = a;
        a = b;
        b = temp;
    }
    if(b < c){
        temp = b;
        b = c;
        c = temp;
    }
    if(a < b){
        temp = a;
        a = b;
        b = temp;
    }
}

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    sort(a, b, c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}
*/
