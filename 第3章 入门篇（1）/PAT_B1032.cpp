#include <stdio.h>

int main()
{
    int N = 0;
    scanf("%d", &N); // INPUT:参赛选手人数

    int score[N + 1] = {0}; // 计分板，最多也就N个学校吧！为了序号一致+1
    int topSchool = 0; score[0] = -1; // 最初top值置负:防止全零分数导致返回0号学校

    int schID, stuScore;
    while(N--){
        scanf("%d %d", &schID, &stuScore); // INPUT:学校ID，学生分数
        score[schID] += stuScore;
        if(score[schID] > score[topSchool]) // 与总分最高者比较
            topSchool = schID;
    }
    printf("%d %d\n", topSchool, score[topSchool]); // OUTPUT:top学校ID，总分
    return 0;
}
