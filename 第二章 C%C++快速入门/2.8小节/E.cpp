#include <stdio.h>

struct SS{
    int num;
    char name[10];
    int course1, course2, course3;
};

void input(SS student[])
{
    int i = 0;
    while(i < 10){
        scanf("%d %s %d %d %d", &student[i].num, student[i].name,
              &student[i].course1, &student[i].course2, &student[i].course3);
        i++;
    }
}

void output(SS student[])
{
    int i = 0, top_score = 0, topStu = 0;
    double  average[3] = {0.0, 0.0, 0.0};
    while(i < 10){
        int temp = student[i].course1 +
            student[i].course2 + student[i].course3;
        if(temp > top_score){
            top_score = temp;
            topStu = i;
        }
        average[0] += student[i].course1;
        average[1] += student[i].course2;
        average[2] += student[i].course3;
        i++;
    }
    average[0] /= 10.0;
    average[1] /= 10.0;
    average[2] /= 10.0;
    printf("%.2f %.2f %.2f\n", average[0], average[1], average[2]);
    printf("%d %s %d %d %d\n", student[topStu].num, student[topStu].name,
              student[topStu].course1, student[topStu].course2, student[topStu].course3);
}

int main()
{
     struct SS student[10];
     input(student);
     output(student);
     return 0;
}
