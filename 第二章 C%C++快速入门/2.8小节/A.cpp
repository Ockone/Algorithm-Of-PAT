#include <stdio.h>
#include <string.h>

struct person {
    char name[20];
    int count;
}leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};

int main()
{
    int n = 0;
    scanf("%d\n", &n); // 如果没有\n，会导致gets()方法干扰
    char temp[20];
    while(n > 0){
        gets(temp);
        if(strcmp(temp, "Li") == 0)
            leader[0].count++;
        if(strcmp(temp, "Zhang") == 0)
            leader[1].count++;
        if(strcmp(temp, "Fun") == 0)
            leader[2].count++;
        n--;
    }
    for(int i = 0; i < 3; i++){
        printf("%s:%d\n", leader[i].name, leader[i].count);
    }
    return 0;
}
