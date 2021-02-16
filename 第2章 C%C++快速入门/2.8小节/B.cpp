#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
    int num;
    char name[20];
    char sex;
    int age;
};

int main()
{
    int n;
    scanf("%d", &n);
    student *st[n]; // 指针变量未初始化时它指向的地址空间是不可控的
    // 指针变量初始化转移到下列循环中

    int nu;
    char na[20];
    char se;
    int ag;
    int i = 0;
    while(i < n){
        scanf("%d %s %c %d", &nu, na, &se, &ag); // 千万注意字符数组别加&
                                                 // 这个错误卡了一下午
        st[i] = (student *)malloc(sizeof(student)); // 为指针变量分配内存
        //声明而未初始化的指针变量不可使用
        st[i]->num = nu;
        strcpy(st[i]->name, na);
        st[i]->sex = se;
        st[i]->age = ag;
        i++;
    }
    i = 0;
    while(i < n){
        printf("%d %s %c %d\n", st[i]->num, st[i]->name, st[i]->sex, st[i]->age);
        i++;
    }
    return 0;
}
