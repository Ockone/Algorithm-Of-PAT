#include <stdio.h>

struct SS{
    int num;
    char name[10];
    int course1, course2, course3;
};

void input(SS student[])
{
    int i = 0;
    while(i < 5){
        scanf("%d %s %d %d %d", &student[i].num, student[i].name,
              &student[i].course1, &student[i].course2, &student[i].course3);
        i++;
    }
}

void output(SS student[])
{
    int i = 0;
    while(i < 5){
        printf("%d %s %d %d %d\n", student[i].num, student[i].name,
              student[i].course1, student[i].course2, student[i].course3);
        i++;
    }
}

int main()
{
     struct SS student[5];
     input(student);
     output(student);
     return 0;
}
