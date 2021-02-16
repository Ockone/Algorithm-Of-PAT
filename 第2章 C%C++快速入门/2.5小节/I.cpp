#include <stdio.h>

int main()
{
    int rec1[2][3], rec2[3][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++)
            scanf("%d", &rec1[i][j]); // ¸Õ¸Õ¶ªÁË'&'·û£¬ÂèÒ®£¡
    }
    // ÖÃ»»
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++)
            rec2[j][i] = rec1[i][j];
    }
    // Êä³ö
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++)
            printf("%d ", rec2[i][j]);
        printf("\n");
    }
}
