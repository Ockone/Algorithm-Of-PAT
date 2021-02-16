#include <stdio.h>

int main()
{
    int sortList[10];
    for(int i = 0; i <= 9; i++)
        scanf("%d", &sortList[i]);

    for(int i = 9; i >= 1; i--){
        if(sortList[i] < sortList[i-1]){
            int temp = sortList[i];
            sortList[i] = sortList[i-1];
            sortList[i-1] = temp;
        }else{
            break;
        }
    }

    for(int i = 0; i <= 9; i++)
        printf("%d\n", sortList[i]);

    return 0;
}
